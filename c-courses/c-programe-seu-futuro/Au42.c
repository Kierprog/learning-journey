#include <stdio.h>

int main() {

    int a;

    printf("Digite um valor qualquer: ");
    scanf("%i", &a);

    if (a < 0)  //So uma instru�ao pode por sem parenteces
        printf("\tValor negativo!");  
    else  //Em c a indenta�ao � apenas um recurso visual pro programador n afeta a execu�ao do programa
        printf("\tValor positivo ou igual a 0! ");
       //printf("\tValor positivo ou igual a 0! "); //Com mais de uma tem que por.
    

    return 0;
}