#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir
de tr�s notas. Fa�a um programa que leia as notas e o tipo da m�dia escolhida pelo usu�rio e calcule
a apresente a m�dia:
Op��es:
a - Aritm�tica.
p - Ponderada (pesos: 3,3,4).
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num[3], media;
    int c, boni = 0;
    char esc, n_media[20];

    printf("CALCULA MEDIA\n"
           "============================\n"
           "Qual media deseja calcular?\n"
           "----------------------------\n"
           " A - Aritimetica\n"
           " B - Ponderada\n"
           "============================\n");
    printf("Digite sua escolha: ");
    esc = getchar();
    
    if ((esc != 'A' && esc != 'a') && (esc != 'B' && esc != 'b')) {
        printf("Escolha invalida!!\n");
        while (1) {
            printf("Digite sua escolha: ");
            getchar();
            esc = getchar();
            if (esc == 'A' || esc == 'a' || esc == 'B' || esc == 'b') break;
            printf("Escolha invalida!!\n");
        }
    }
    
    printf("--------------------\n");

    for (c = 0; c < 3; c++) {  //++ so funciona em variavel int.
        boni++;
        printf("Digite o %i� valor: ", boni);
        scanf("%f", &num[c]);
    }

    if (esc == 'A' || esc == 'a') {
        media = (num[0] + num[1] + num[2]) / 3;
        strcpy(n_media, "Aritimetica");
    } else if (esc == 'B' || esc == 'b') {
        media = (num[0] * 3 + num[1] * 3 + num[2] * 4) / 10;
        strcpy(n_media, "Ponderada");
    }

    printf("\n===================\n");  
    printf("Media %s: %.2f", n_media, media);
    printf("\n===================\n");  

    return 0;
}