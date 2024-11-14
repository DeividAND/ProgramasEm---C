#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;
    
    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto){
            printf("Voce ganhou!\n");
            printf("Numero secreto: %d\n", numeroSecreto);
        } else {
            printf("Voce perdeu!\n");
            printf("Numero secreto: %d\n", numeroSecreto);
        }
    break;
    case 2:
        printf("Regras do jogo:\n");
    break;
    case 3:
        printf("Sair\n");
    break;
    default:
        printf("Opcao invalida!\n");
    }
}