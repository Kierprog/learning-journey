#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int num, nump, numa; 

    printf("<<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%i", &num);
    nump = num + 1;
    numa = num - 1;
    printf("Analizando o n�mero %i, seu antecessor � %i e seu sucessor � %i.", num, numa, nump);
}