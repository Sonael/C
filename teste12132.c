#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {



    do{
    gets(str);
    if(strcmp(str, '\n')==0) break; //Aqui sair� do la�o caso aperte enter sem digitar nada
    //..
    cont++;
    }while (cont<100); //No meu caso eram at� 100 registros - Se n�o tiver um limite utilizar o c�digo do tpcvasco
  return 0;
}
