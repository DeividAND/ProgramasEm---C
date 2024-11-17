#include <stdio.h>

int main(){

    int index;

    char * nomes[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");
    printf("Digite o numero do aluno que deseja ver as notas: \n");
    scanf("%d", &index);

    printf("As nota do %s sao: %s , %s \n", nomes[index][0], nomes[index][1], nomes[index][2]);

    return 0;
}
    