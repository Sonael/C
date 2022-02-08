#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {



    do{
    gets(str);
    if(strcmp(str, '\n')==0) break; //Aqui sairá do laço caso aperte enter sem digitar nada
    //..
    cont++;
    }while (cont<100); //No meu caso eram até 100 registros - Se não tiver um limite utilizar o código do tpcvasco
  return 0;
}
