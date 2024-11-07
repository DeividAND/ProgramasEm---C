#include <stdio.h>
// soma, subtração, multiplicação e divisão.

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtração, multiplicação,divisão;

    printf("Entre  com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    subtração = numero1 - numero2;

    //operação multiplicação
    multiplicação = numero1 * numero2;

    //operação divisão
    divisão = numero1 / numero2;

    printf("A Soma e: %d\n", soma);
    printf("A Subtracao e: %d\n", subtração);
    printf("A Multiplicacao e: %d\n", multiplicação);
    printf("A Divisao e: %d\n", divisão);
}