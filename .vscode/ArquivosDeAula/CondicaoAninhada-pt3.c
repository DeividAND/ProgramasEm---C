#include <stdio.h>

int main(){
    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E 

    if (nota >= 90){
        printf("Voce tirou uma nota A!");
    } else if (nota >= 80 && nota < 90){
        printf("Voce tirou uma nota B!");
    } else if (nota >= 70 && nota < 80){
        printf("Voce tirou uma nota C!");
    } else if (nota >= 60 && nota < 70){
        printf("Voce tirou uma nota D!");
    } else {
        printf("Voce tirou uma nota E!");
    }
    
}