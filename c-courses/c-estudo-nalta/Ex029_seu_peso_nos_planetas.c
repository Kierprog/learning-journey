#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float meu_peso, peso_planet;
    int escol;
    char nome_planeta[30];

    printf("Seu peso na Terra (Kg) = ");
    scanf("%f", &meu_peso);
    printf("\n\t   ESCOLHA UM PLANETA   \n"
           "\t========================\n"
           "\t 1\tMerc�rio\n"
           "\t 2\tV�nus\n"
           "\t 3\tMarte\n"
           "\t 4\tJ�piter\n"
           "\t 5\tSaturno\n"
           "\t 6\tUrano\n"
           "\t========================\n"
           "\tDigite sua op�ao => ");
    scanf("%i", &escol);
    printf("\n--------------------------------------------\n");
    
    switch (escol) {
        case 1:
            strcpy(nome_planeta, "Merc�rio");
            peso_planet = meu_peso * 0.37;
            break;
        case 2:
            strcpy(nome_planeta, "V�nus");
            peso_planet = meu_peso * 0.9;
            break;
        case 3:
            strcpy(nome_planeta, "Marte");
            peso_planet = meu_peso * 0.38;
            break;
        case 4:
            strcpy(nome_planeta, "J�piter");
            peso_planet = meu_peso * 2.53;
            break;
        case 5:
            strcpy(nome_planeta, "Saturno");
            peso_planet = meu_peso * 1.07;
            break;
        case 6:
            strcpy(nome_planeta, "Urano");
            peso_planet = meu_peso * 0.89;
            break;
        default:
            printf("Seu peso n�o pode ser calculado para outros planetas. Tente novamente.");
    }

    if (escol>0 && escol<=6) {
        printf("No planeta %s, seu peso seria %.2fKg", nome_planeta, peso_planet);
    }

    printf("\n--------------------------------------------");
    printf("\nVOLTE SEMPRE!");
}