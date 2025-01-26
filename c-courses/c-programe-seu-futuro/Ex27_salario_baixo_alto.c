#include <stdio.h>
#include <locale.h>

/*14) Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a
quantidade de funcion�rios e o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir a
m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio mais baixo.
*/

int main () {
    setlocale(LC_ALL, "Portuguese");
    int quant_func, cont;
    float salario, salario_ba, salario_al, media_sala;

    printf(" EMPRESA X\n"
           "-------------\n"
           "Quantos funcionarios: ");
    scanf("%i", &quant_func);

    for (cont = 0; cont<quant_func; cont++) {
        printf("Informe o %i� salario: ", cont+1);
        scanf(" %f", &salario);
        media_sala += salario;

        if (cont==0) salario_ba = salario; //Primeiro valor
        if (salario>salario_al) salario_al = salario; //Maior salario
        else if (salario<salario_ba) salario_ba = salario; //Menor salario
    }

    printf("\nRESULTADO\n"
           "-------------------------\n");
    if (quant_func < 2) printf("N�o � possivel calcular a media com somente 1 funconario!\n");
    else {
        media_sala = media_sala / quant_func;
        printf("M�dia sal�rial: R$%.3f,00\n", media_sala);
    }
    printf("-------------------------\n"
           "Maior sal�rio: R$%.3f,00\n"
           "Menor sal�rio R$%.3f,00\n"
           "-------------------------\n", salario_al, salario_ba);
    
    printf("\nPressione Enter para fechar...");
    getchar();
    getchar();

    return 0;
}