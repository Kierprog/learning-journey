#include <stdio.h>
#include <locale.h>

/*13) Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e diga se o n�mero
informado � primo ou n�o.
*/

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num, t=0, i, primo=0;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num > 1) {
        t = num;
        t++;
        for (i=1; i<t; i++){
            if (num % i == 0) primo++;
        }
    }

    if (primo == 2) printf("O n�mero %i, � Primo!", num);
    else printf("O numero %i, n�o � Primo!", num);

    printf("\nPressione Enter para fechar...");
    getchar();
    getchar();

    return 0;
}
