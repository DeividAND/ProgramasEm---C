#include <stdio.h>

int main(){

    int a = 0;

    if (!a){ //(!(a > 0)
        printf("A variavel 'a' e zero.\n");
        //printf("a nao é um numero positivo\n");  
    } else {
        printf("A variavel e diferente de zero.\n");
    }
}