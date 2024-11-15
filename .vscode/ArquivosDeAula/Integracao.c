#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de gerenciamento de estudantes\n");
    printf("1. Calcular media\n");
    printf("2. Determinar estatus\n");
    printf("3. Sair\n");
    printf("Escolha opcao [1, 2 ou 3]\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("Informe a primeira nota: ");
        scanf("%f", &nota1);
        printf("Informe a segunda nota: ");
        scanf("%f", &nota2);
        // Testar se as notas são maiores que 0 e menores ou iguais a 10
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("Sua media e: %.2f", media);
        } else {
            printf("Entrada invalida");
        }
        break;
    case 2:
        printf("Determinar status\n");
        printf("Informe sua media: ");
        scanf("%f", &media);

        media >= 5 ? printf("Aprovado!!\n") : printf("Reprovado!!\n");
        break;
    case 3:
        printf("Saindo do programa.....\n");
    }

    return 0;
}