#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");

    int n = 0;
    int n1 = 0;

    while (1) {

        printf("Digite um n�mero: \n");
        scanf("%d", &n);

        printf("Agora digite outro n�mero: \n");
        scanf("%d", &n1); 

        if (n > n1) {
            printf("O n�mero %d � maior que %d\n", n, n1);
        } else if (n < n1) {
            printf("O n�mero %d � menor que %d\n", n, n1);
        } else {
            printf("Os dois n�meros s�o iguais.\n");
        }
        
        break;
    }

    return 0;
}

