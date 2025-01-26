#include <stdio.h>

/*
5) Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e
imprima a m�dia semestral. Fa�a com que o programa s� aceite notas v�lidas (uma nota v�lida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

int main() {
    float aluno_notas[2];
    int conf=0;

    do {
        if (conf == 0) {
        printf("Primeira nota: ");
        scanf("%f", &aluno_notas[conf]);
        }
        
        if (conf == 1) {
        printf("Segunda nota: ");
        scanf("%f", &aluno_notas[conf]);
        }
        
        if (aluno_notas[conf] > 0 && aluno_notas[conf] <= 10) ++conf;
        else printf("Nota invalida, verifique se esta no intervalo (1 a 10).\n"
                    "Tente novamente...\n");
        
    } while (!(conf==2)); //Quando for usar o ! tem que por () onde quer q ele funcione.

    printf("\nPressione Enter para fechar...");
    getchar();
    getchar();
    
    return 0;
}