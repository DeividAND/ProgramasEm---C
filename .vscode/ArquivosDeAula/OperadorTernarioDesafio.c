#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Inicio do jogo
    printf("Bem vindo ao jogo maior, menor ou igual!\n");
    printf("Voce deve escolher um numero e o tipo de  comparacao\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    // Exibir número do computador
    // printf("O numero do computador e: %d\n", numeroComputador);

    switch (tipoComparacao){
    case 'M':
    case 'm':
        printf("*** Comparar Maior ***\n");

        if (numeroJogador > numeroComputador){
            printf("Voce venceu!!!\n");
            printf("O numero do computador e: %d\n", numeroComputador);
        } else {
            printf("Voce perdeu.\n");
            printf("O numero do computador e: %d\n", numeroComputador);
        }
        break;
    case 'N':
    case 'n':
        printf("*** Comparar Menor ***\n");

        if (numeroJogador < numeroComputador){
            printf("Voce venceu!!!\n");
            printf("O numero do computador e: %d\n", numeroComputador);
        } else {
            printf("Voce perdeu.\n");
            printf("O numero do computador e: %d\n", numeroComputador);
        }
        break;
    case 'I':
    case 'i':
        printf("*** Comparar Igual ***\n");

        if (numeroJogador == numeroComputador){
            printf("Voce venceu!!!\n");
            printf("O numero do computador e: %d\n", numeroComputador);
        } else {
            printf("Voce perdeu.\n");
            printf("O numero do computador e: %d\n", numeroComputador);
        }
        break;
    default:
        printf("Dados invalidos, digitar (M, N ou I como informado no menu).\n");
    }
}