#include <stdio.h>

int main(){
    int temperatura = 28;
    int resultado;

    resultado = temperatura > 30 ? 1 : 0;

    if (resultado == 1){
        printf("Esta calor!\n");
    } else {
        printf("Nao esta calor!\n");
    }

    return 0;
}