#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo �
equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem ?N�o
formam um tri�ngulo?.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int lados[3], c, b=0;

    printf("    FORMA UM TRIAGOLO\n"
           "--------------------------\n"
           "Digite o comprimento dos tres\n"
           "lados para verificar se e um triangolo.\n"
           "=======================================\n");

    for (c = 0; c <= 2; c++) {
        ++b;
        printf("Digite o %i� lado: ", b);
        scanf("%i", &lados[c]);
    }
    
    printf("---------------------------------\n");
    if ((lados[0] + lados[1]) > lados[2] && (lados[0] + lados[2]) > lados[1] && (lados[1] + lados[2]) > lados[0]) {
        if (lados[0] == lados[1] && lados[0] == lados[2]) {
            printf("Tri�ngolo equil�tero");
        }else if ((lados[0] == lados[1]) || (lados[0] == lados[2]) || (lados[1] == lados[2])) {
            printf("Tri�ngolo Is�sceles");
        }else {
            printf("Tri�ngulos Escalenos");
        }
    } else {
        printf("Os tr�s lados n�o formam um tri�ngulo");
    }
    printf("\n---------------------------------\n");

    printf("Pressione Enter para fechar...\n");
    getchar();
    getchar();

    return 0;
}