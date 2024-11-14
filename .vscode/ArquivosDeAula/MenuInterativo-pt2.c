#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo de Jokempo ***\n");
    printf("opcoes:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha[1, 2 ou 3]: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch(escolhaJogador){
    case 1:
        printf("Pedra - ");
    break;
    case 2:
        printf("Papel - ");
    break;
    case 3:
        printf("Tesoura - ");
    break;
    default:
        printf("Opcao invalida!");
    }

    switch(escolhaComputador){
    case 1:
        printf("Computador: Pedra\n");
    break;
    case 2:
        printf("Computador: Papel\n");
    break;
    case 3:
        printf("Computador: Tesoura\n");
    break;
    }

    if (escolhaJogador == escolhaComputador ){
        printf("Houve um empate!\n");
    } else if (escolhaJogador == 1 && escolhaComputador == 2){
        printf("Computador venceu!\n");
    } else if (escolhaJogador == 1 && escolhaComputador == 3){
        printf("Jogador vence!\n");
    } else if (escolhaJogador == 2 && escolhaComputador == 1){
        printf("Jogador vence!\n");
    } else if (escolhaJogador == 2 && escolhaComputador == 3){
        printf("Computador vence!\n");
    } else if (escolhaJogador == 3 && escolhaComputador == 1){
        printf("Computador vence!\n");
    } else {
        printf("Jogador vence\n");
    }


    return 0;
}