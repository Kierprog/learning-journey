#include <stdio.h>

/*Voc� decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Fa�a um programa para calcular quanto voc� ter� ao final dos 30 dias.*/

int main() {
    float dinheiro;
    int i;
    
    printf("  INVESTIMENTO 30\n"
           "===================\n");
    printf("Qual quantidade de dinheiro deseja investir por 30 dias?\n"
           "Valor: R$");
    scanf("%f", &dinheiro);
    
    for (i=1; i<=30; i++) {
        dinheiro *= 2;
    }

    printf("\nNo final dos trintas temos: R$%.2f", dinheiro);
    return 0;
}