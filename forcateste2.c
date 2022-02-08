#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char palavra[40],letra[40], coluna[40]=".";
    int vidas = 3,i,over,pts=0,tam;

    printf("Digite a palavra a ser adivinhada: ");
    scanf("%s",palavra);
    system("cls");


    for(i=0;i<strlen(palavra);i++){
        coluna[i]='-';
        tam = strlen(palavra);

    }

    while(vidas>0){
        over = 0;
        printf("\n %s \n",coluna);
        printf("\n Digite uma letra: ");
        scanf("%s",letra);
        getchar();

        for(i=0;i<strlen(palavra);i++){
            if(letra[0] == palavra[i]){
                if(letra[0] != coluna[i]){
                    coluna[i] = letra[0];
                    over = 1;
                    pts++;
                }
            }
        }
        if(over==0){
            vidas--;
            if(vidas == 0){
                printf("\nGame Over\n");
                printf("\nA palavra era: %s\n",palavra);
                break;

            }
            else{
                printf("\nVoce errou, vidas:%i\n",vidas);

            }
        }
         else{
                if(pts == tam){
                    printf("\nVoce Ganhou\n");
                    break;
                }
         else{
            printf("\nVoce acertou uma letra\n");
         }

         }

    }

	return 0;
}
