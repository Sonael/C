#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, soma;

    printf("digite um numero: "); scanf("%d", &a);
    printf("digite um numero: "); scanf("%d", &b);jnlkn

    soma = a+b;

    if(soma == 10 || soma == 15){
        printf("A soma e igal que dez ou a quinze");
    }

    else if(soma == 20){
        printf("A soma foi igual a 20");
    }

    else{
        printf("A soma n e maior que dez");
    }

	return 0;
}
