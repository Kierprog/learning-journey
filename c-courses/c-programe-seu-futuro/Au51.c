#include <stdio.h>

// Estrutura de sele�ao switch case com caracter:

int main() {

    char opcao;

    printf("Opcoes:\n"
           "a - ola\n"
           "b - hello");
    opcao = getchar();

    switch (opcao) {     
        case 'a':  //lembra, caracter '' e string "".
            printf("Ola!");
            break;
        case 'b':
            printf("Hello!");
        
    }

    return 0;
}

/*Boa pergunta.
//gostei muito do v�deo , j� me ajudou , como fa�o para o computador aceitar tanto mai�sculo quando min�sculo ?

A estrutura switch case n�o aceita intervalos, apenas uma compara��o de igualdade. Assim, se voc� precisa verificar min�sculo e mai�sculo, ser�o necess�rios dois cases, um para cada caracter, assim:

case 'a':
  // codigo do case a
  break;
case 'A':
  // c�digo do case A
  break;

Se o mesmo trecho de c�digo for executado para 'a' e para 'A', voc� pode fazer uma fun��o ou procedimento e cham�-lo dentro dos dois cases, assim voc� escreve o trecho de c�digo apenas uma vez.

case 'a':
  minha_funcao();
  break;
case 'A':
  minha_funcao();
  break;
*/

/*

case 'A': //Interresante ja que ele pula pra seguinte sem ter um break
case 'a':
    printf("Mensagem para A ou a\n");
    break;
case 'B':
case 'b':
    printf("Mensagem para B ou b\n");
    break;
*/