#include <stdio.h>

int main(){
    int numero1 = 40, numero2 = 40;
    int maior;

    maior = numero1 > numero2 ? 1 : 0;

    if (maior == 1){
        printf("Numero 1 e maior\n");
    } else if (numero1 == numero2){
        printf("Numero 1 e igual ao numero 2\n");
    } else {
        printf("Numero 2 e maior\n");
    }

    return 0;
}