#include <stdio.h>
#include <locale.h>

/*17) Fa�a um programa que pe�a n�meros ao usu�rio. Quando o usu�rio digitar o n�mero 0 (zero) o
programa deve imprimir na tela quantos n�meros positivos e negativos foram digitados.
Exemplo:
*/

int main() {
    int nmbs, q_posi=0, q_neg=0;

    do {
        printf("Digite um valor (0 para parar!):");
        scanf("%i", &nmbs);

        if (nmbs < 0) q_neg++;
        else if (nmbs >= 1) q_posi++;

    } while (nmbs != 0);
    
    printf("\n=============\n");
    
    if (q_posi != 0) printf("Positivos:%i\n", q_posi);
    if (q_neg != 0) printf("Negativos:%i", q_neg);

    printf("\nPressione Enter para fechar...");
    getchar();
    getchar();
   
    return 0;
}