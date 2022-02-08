#include <stdio.h>

void explica_programa()
{
    char nome[] = "Nome Completo";
    int numero_matricula = 1234567;
    char turma[] = "SI";
    char texto[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum ac elementum turpis. Nunc accumsan placerat turpis, sit amet tempor lorem pharetra id. Mauris sit amet maximus dolor. Aenean pharetra cursus sagittis. Phasellus a purus turpis. Ut dapibus sem orci, at luctus eros efficitur vel. Quisque sed tellus tellus. Etiam non malesuada nibh. ";
    strupr(nome);
    printf("\n\n");
    printf("Nome: %s", nome);
    printf("\n\n");
    printf("Matricula: %i - %s", numero_matricula, turma);
    printf("\n\n");
    printf("%s", texto);
}

int calcula_termo(int a, int b)
{
    int c = a + b;

    return c;

}

int calcula_diferenca(int a, int b)
{
    int c = a-b;

    if(c < 0)
    {

        c = c*-1;
    }

    return c;
}

void imprimir_resultado(int k ,  int U0, int U1, int T0, int T1,int d, int Un, int Tn)
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
                    Un = calcula_termo(U0, U1);
                    Tn = calcula_termo(T0, T1);

                    d = calcula_diferenca(Un, Tn);

                    imprimir_resultado(dk, U0, U1, T0, T1, d, Un, Tn);

                    U0 = U1;
                    U1 = Un;

                    T0 = T1;
                    T1 = Tn;

                    dk++;

                }while(dk < dmax);

                printf("testar outra serie(s/n): ");
                scanf("%c", &resp);fflush(stdin);

                if(resp == 'n')
                {
                    break;

                }
        }

        explica_programa();
	return 0;
}
