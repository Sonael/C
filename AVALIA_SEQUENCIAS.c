#include <stdio.h>

void EXPLICA_PROGRAMA()
{
    char nome[] = "Hyngrid Souza e Silva";
    int numero_matricula = 200984579;
    char turma[] = "S1";
    char texto[] = "Este programa tem a finalidade de calcular de forma recursiva um termo S de uma sequencia usando dois termos anteriores da mesma sequencia (Sn-1 e Sn-2) determinando a diferenca entre termos de duas sequencias S com condicoes inicias distintas. Espero que atenda a proposta do Exercicio Escolar, pois foi desafiador a criacao desse programa. Abracos, professor";
    strupr(nome);
    printf("\n\n");
    printf("Nome: %s", nome);
    printf("\n\n");
    printf("Matricula: %i - %s", numero_matricula, turma);
    printf("\n\n");
    printf("%s", texto);
}

int CALCULAR_TERMO(int a, int b)
{
    int c = a + b;

    return c;

}

int CALCULAR_DIFERECA(int a, int b)
{
    int c = a-b;

    if(c < 0)
    {

        c = c*-1;
    }

    return c;
}

void IMPRIMIR_RESULTADO(int k ,  int U0, int U1, int T0, int T1,int d, int Un, int Tn)
{
    printf("indice: %i, U0 = %i ,U1 = %i , T0 = %i,  T1 = %i, Distancia= %i, Soma acumuladada de U = %i, Soma acumulada de T = %i", k, U0, U1, T0 , T1,d, Un, Tn );
    printf("\n");
    printf("\n");
}

int main() {

            while(1){

                int Un, Tn, U0, U1, T1, T0, dk=0, d, dmax;
                char resp;

                do {
                    printf("Informe o valor de U0:");
                    scanf("%i", &U0);fflush(stdin);
                } while (U0 < 0);

                do {
                    printf("Informe o valor de U1:");
                    scanf("%i", &U1);fflush(stdin);
                } while (U1 <= U0);

                do {
                    printf("Informe o valor de T0:");
                    scanf("%i", &T0);fflush(stdin);
                } while (T0 < 0 || T0 == U0);

                do {
                    printf("Informe o valor de T1:");
                    scanf("%i", &T1);fflush(stdin);
                } while (T1 <= T0 || T1 == U1);

                do {
                    printf("valor da maior diferenca: ");
                    scanf("%i", &dmax);fflush(stdin);
                } while (dmax < 1 || dmax >300000);



                printf("\n");

                do
                {
                    Un = CALCULAR_TERMO(U0, U1);
                    Tn = CALCULAR_TERMO(T0, T1);

                    d = CALCULAR_DIFERECA(Un, Tn);

                    IMPRIMIR_RESULTADO(dk, U0, U1, T0, T1, d, Un, Tn);

                    U0 = U1;
                    U1 = Un;

                    T0 = T1;
                    T1 = Tn;

                    dk++;

                }while(dk < dmax);

                printf("testar outra serie(s/n): ");
                scanf("%c", &resp);fflush(stdin);

                if(resp == 'n' || resp == 'N')
                {
                    break;

                }
        }

        EXPLICA_PROGRAMA();
	return 0;
}
