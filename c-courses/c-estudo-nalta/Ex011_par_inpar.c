#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero qualquer: ");
    scanf("%i", &num);
    printf("O n�mero que voc� digitou � %s!", (num % 2 == 0)?"Par":"�mpar");
}