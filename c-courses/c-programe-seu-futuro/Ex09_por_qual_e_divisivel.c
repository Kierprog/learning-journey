#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em C que leia um n�mero e informe se ele � divis�vel por 2, por 3 ou por
//5, ou se n�o � divis�vel por nenhum deles.

int main () {
    int num, c = 0;

    printf("Digite um valor qualquer positivo: ");
    scanf("%i", &num);
    printf("----------------------------------\n");

    if (num != 0) { 
        if (num % 2 == 0) {
            printf("O valor %i e divisivel por 2.\n", num);
            c++;
        }
        if (num % 3 == 0) {
            printf("O valor %i e divisivel por 3.\n", num);
            c++;
        }
        if (num % 5 == 0) {
            printf("O valor %i e divisivel por 5.\n", num); 
            c++;
        }
        if (c==0) {
            printf("O valor %i nao e divisivel por 2, 3 e nem por 5.\n");   
        }  
    }

    printf("----------------------------------\n");

    system("pause");
    
    return 0;
}