#include <stdio.h>

//Operador ternario alinhado

int main() {
    int a;

    printf("Digite um valor: ");
    scanf("%i", &a);

    a < 0 ? printf("valor negativo!") :
        a > 0 ? printf("Postivo") : printf(""); //Desse jeito ainda precisa que o ultimo tenha duas opcoes.
    
    return 0;
}

//Nota:Ol�! Com rela��o aos tern�rios, posso aninhar v�rias a depender da minha condi��o? Tipo: colocar in�meras linhas de aninhamento?
//
//minha recomenda��o � que n�o fa�a. Tern�rios aninhados dificulta muito a compreens�o do c�digo.  
//O operador tern�rio foi criado para substituir em apenas uma linha um if / else simples.