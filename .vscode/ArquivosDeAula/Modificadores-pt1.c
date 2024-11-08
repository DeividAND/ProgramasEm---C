#include <stdio.h>

int main(){
    int numeroSinal = 30000000000; // Esse valor excede o valor de um int normal
    unsigned int numeroSemSinal = 30000000000;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    return 0;
}