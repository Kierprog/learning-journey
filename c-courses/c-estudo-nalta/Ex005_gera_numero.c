#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int num = rand() % 5 + 1;
    int n;
    printf("<<Ex005 - Ser� que Voc� acerta? >>\n\n");
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � o seu palpite? ");
    scanf("%i", &n);
    printf("Eu pensei no n�mero %i e voc� no %i.", num, n);
}