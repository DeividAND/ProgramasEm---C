#include <stdio.h>

int main(){
    float numero1, numero2, numero3;
    float media;

    printf("*** Programa de Calculo de Media ***\n");

    printf("Informe a primeira nota: ");
    scanf("%f", &numero1);

    printf("Informe a segunda nota: ");
    scanf("%f", &numero2);

    printf("Informe a terceira nota: ");
    scanf("%f", &numero3);

    media = (float) (numero1 + numero2 + numero3) / 3;
    printf("A media do aluno e: %.2f\n", media);

    return 0;
}