#include <stdio.h>
#include <locale.h>
/*
Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no
calend�rio. Caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem ?M�s
Inv�lido?.
*/
int main() {
    setlocale(LC_ALL, "Portuguese");
    int m, mes;

    printf("M�S VALIDO?\n"
           "-------------\n");
    printf("Digite o numero de um m�s:");
    scanf("%i", &m);

    if (m >= 1 && m <= 12) {
        printf("\t----------------------\n");
        
        if (m==1) printf("\t  M�s de Janeiro"); //Quando souber variaveis compostas atualizo.
        if (m==2) printf("\t  M�s de Fevereiro"); 
        if (m==3) printf("\t  M�s de Mar�o"); 
        if (m==4) printf("\t  M�s de Abril"); 
        if (m==5) printf("\t  M�s de Maio"); 
        if (m==6) printf("\t  M�s de Junho"); 
        if (m==7) printf("\t  M�s de Julho"); 
        if (m==8) printf("\t  M�s de Agosto"); 
        if (m==9) printf("\t  M�s de Setembro"); 
        if (m==10) printf("\t  M�s de Outubro"); 
        if (m==11) printf("\t  M�s de Novembro"); 
        if (m==12) printf("\t  M�s de Dezembro");  
        
        printf("\n\t----------------------\n");
    } else {
        printf("N�o existe m�s %i!\n", m);
    }
    	
    printf("\t  M�s de %s", mes);
    printf("Pressione Enter para fechar...");
    getchar();
    getchar();

    return 0;
}