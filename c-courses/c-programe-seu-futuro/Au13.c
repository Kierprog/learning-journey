#include <stdio.h>
int main() {
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b); 
    
    //Da pra limpar o buffer do teclado assim, pondo um espa�o entre e %c %c, aparentemente � um comando para 
    // desconsiderar o ENTER, o TAB, e o ESPA�O
    //Obs: O fllsuh() so funciona no windos, e n funciona em todos os casos.

    printf("Primeira letra %c segunda %c", a, b);
    return 0;
}