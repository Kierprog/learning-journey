#include <stdio.h>

/*15) Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na
multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.*/

int main() {
    int quant_vs, valor, c, resul=0;

    printf("Qual valor a ser multiplicado?  ");
    scanf("%i", &valor);
    printf("Quantas vezes? x");
    scanf("%i", &quant_vs);

    for (c=1; c<=quant_vs; c++) {
        resul += valor;
    }

    printf("\nRESULTADO\n"
           "%i  x %i = %i", valor, quant_vs, resul);

    printf("\nPressione Eneter para continuar...");
    getchar();
    getchar();
    
    return 0;
}