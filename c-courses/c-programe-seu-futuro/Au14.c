#include <stdio.h>

//Aula 14 - como ler duas letras e limpar o buffler do teclado com espa�o scan().

int main() {
    char a, b;

    printf("Digite uma letras: ");
    scanf("%c", &a); 
    
    printf("Digite uma letras: ");
    scanf(" %c",&b); //Basta por o espa�o na frente, que ele ignora ENTER, TAB, ESPA�O.

    printf("Primeira letra %c segunda %c", a, b);
    return 0;
}