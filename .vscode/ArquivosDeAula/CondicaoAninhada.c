#include <stdio.h>

int main(){
    int idade;
    float renda;

    // if (condição){
    //      if (condição){
    //              // Condição a ser executada se as condições anteriores forem verdadeiras
    //    }      
    // }

    /*
    Programa que verifica se uma pessoa está qualificada para um
    desconto especial com base na idade e na renda mensal.
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
    uma renda mensal abaixo de 2000.*/

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (idade > 60 || idade <= 18){
        if (renda < 2000){
            printf("Voce tem direito ao desconto.\n");
        }else {
            printf("Voce nao tem direito ao desconto devido a renda!\n");
        }
    } else{
        printf("Voce nao atende aos criterios devido a idade.");
    }

}