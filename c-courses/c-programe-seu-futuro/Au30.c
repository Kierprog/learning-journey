#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
    Tabela ascii e acentua�ao
    1 byte (8 bits) -> -128 ate 127 //usando o unsigned tiramos o sinal assim dando pra usar mais letras da tabele ascii
    Obs: a tabela ascii de cima vai ate 127 e -127
    ela � chamada de tabela ascii resumida
    unsigned 1 byte -> 0 ate 255 // essa � a tabela estendida que contem assentos, a primeira n contem.

    9 � o caracter de tabula�ao \t
    10 � o caracter de nova linha \n (Enter)
    65 � a letra A maiuscula
    66 � a letra B maiuscula 
    90 � a letra Z maiuscula.

    1 = setlocale(LC_ALL, NULL); //padrao da linguagem C
    2 = setlocale(LC_ALL, ""); // padrao do sistema operacional
    3 = setlocale(LC_ALL, "Portuguese"); //portugues brasileiro
 
*/
int main () {

    printf("%s\n", setlocale(LC_ALL, "Portuguese")); //mostra qual linguagem ta ativa
    setlocale(LC_ALL, ""); //continua sendo ruim se precisar de assento, pode estar em outra lingua alem do portugues e vai bugar.
    printf("Cora�ao\n");
    printf("%c", 106);  //Da pra imprimir uma letra assim, usando a tabela ascii. Obs: isso � o numero da letra na tabela.
    return 0;
}