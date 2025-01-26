#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int ano_nascimento, idade, ano;

    // Ano atual
    time_t t;
    time(&t);
    struct tm *hora; 
    hora = localtime(&t);
    ano = hora->tm_year + 1900;
    
    printf("Em que ano voc� nasceu? ");
    scanf("%i", &ano_nascimento);
    idade = ano - ano_nascimento; //idade
    printf("-----------------------------\n");
    printf("Voc� tem %i anos certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");

    if (idade >= 65) {
        printf("=== ATEN�AO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");    
    }

    printf("-----------------------------");

}
/*
linha 8
O nome tm para a estrutura (struct) em C � uma conven��o da biblioteca padr�o (time.h) que define a estrutura para representar informa��es de data e hora. 
O nome tm � uma abrevia��o de "time" (tempo, em ingl�s) e foi escolhido para indicar que a estrutura cont�m componentes de tempo,
como ano, m�s, dia, horas, minutos e segundos.*/