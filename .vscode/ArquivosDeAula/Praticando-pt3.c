#include <stdio.h>

int main(){

    int numero, i, resultado;

    printf("Digite um numero para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++){
        
        printf("%d X %d = %d \n", numero, i, i * numero);
    }

    return 0;
}