#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    //sintaxe scanf
    //scanf("formato1" "formato2", &variavel1, variavel2, ...);
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    printf("Idade: %d\n", idade);
    printf("Entre com sua altura\n");
    scanf("%f", &altura);
    printf("Altura: %f\n", altura);
    printf("Entre com a opcao\n");
    scanf(" %c", &opcao);
    printf(" A Opcao é: %c\n", opcao);
}
