#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float preco_produto;
    int esc;
    char epoca[20];

    printf("Digite o pre�o de um produto R$");
    scanf("%f", &preco_produto);
  
    printf("\n\n\t       ESCOLHA UM PER�ODO  \n"
           "\t================================\n"
           "\t   1\tCarnaval         [+10]\n"
           "\t   2\tF�rias Escolares [+20]\n"
           "\t   3\tDia das cria�as  [+5]\n"
           "\t   4\tBlack Friday     [-30]\n"
           "\t   5\tNatal            [-5]\n"
           "\t================================\n"
           "\tDigite sua op�ao => ");
    scanf("%i", &esc);

    printf("\n\n-------------------------------------------------------------\n");

    switch (esc) {
        case 1:
            preco_produto += preco_produto * 10 /  100;
            strcpy(epoca, "Carnaval");
            break;
        case 2:
            preco_produto += preco_produto * 20 / 100;
            strcpy(epoca, "F�rias");
            break;
        case 3:
            preco_produto += preco_produto * 5 / 100;
            strcpy(epoca, "Dia das cria�as");
            break;
        case 4:
            preco_produto -= preco_produto * 30 / 100;
            strcpy(epoca, "Black Friday");
            break;
        case 5:
            preco_produto -= preco_produto * 5 / 100;
            strcpy(epoca, "Natal");
            break;
        default:
            printf("Em �pocas assim, mantenha o pre�o do produto em R$%.2f.\n", preco_produto);
    }
 
    if (esc>0 && esc<=5) {
        printf("Na �poca das %s, o pre�o do produto vai para R$%.2f.\n", epoca, preco_produto);
    }

    printf("-------------------------------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
}