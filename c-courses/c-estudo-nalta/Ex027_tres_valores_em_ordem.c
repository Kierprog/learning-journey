#include <stdio.h>
#include <locale.h>
void main () {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, menor, mair, inte;

    printf("Me diga tr�s n�meros e eu colocarei\n"
           "eles em ordem pra voc�.\n\n"
           "Primeiro n�mero: ");
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
    scanf("%i", &n2);
    printf("Terceiro n�mero: ");
    scanf("%i", &n3);
    printf("--------------------------\n");

    //Maior numero.
    if (n1>n2 && n1>n3) {
        mair = n1;
    } else if (n2>n1 && n2>n3) {
        mair = n2;
    } else {
        mair = n3;
    } 
    
    //Menor numero
    if (n1<n2 && n1<n3) {
        menor = n1;
    } else if (n2<n1 && n2<n3) {
        menor = n2;
    } else {
        menor = n3;
    }

    //Intermediario.
    if (n1 > menor && n1 < mair) {
        inte = n1;
    } else if (n2 > menor && n2 < mair) {
        inte = n2;
    } else {
        inte = n3;
    }

    printf("MAIOR: %i\n"
           "INTERMEDIARIO: %i\n"
           "MENOR: %i", mair, inte, menor);
  
}   