#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int ano, ano_nascimento, idade;

    time_t t;
    time(&t);
    struct tm * data;
    data = localtime(&t);
    ano = data->tm_year + 1900;
    
    printf("Atualmente estamos no ano de %i", ano);
    printf("\nEm que ano voc� nasceu? ");
    scanf("%i", &ano_nascimento);
    idade = ano - ano_nascimento;
    printf("---------------------------------------");
    printf("\nSua idade atual � %i anos.", idade);

    if (idade > 18){
        printf("\nJ� fez 18 anos. espero sinceramente que voc� tenha se alistado.");
    } else{
        printf("\nVoc� ainda n�o tem 18 anos. N�o pode se alistar.")
    }
}

//05/11/2024