#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Informe a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Informe a umidade: \n");
    scanf("%f", &umidade);
    printf("Informe o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("Temperatura esta ALTA!!!\n");
    }else{
        printf("Temperatura esta dentro dos parametros.\n");
    }

    if (umidade > 50){
        printf("Umidade ELEVADA!!!\n");
    }else {
        printf("Umidade dentro dos parametros.\n");
    }

    if (estoque < estoqueMinimo){
        printf("Estoque BAIXO!!!\n");
    }else{
        printf("Estoque dentro dos parametros.");
    }
    
}