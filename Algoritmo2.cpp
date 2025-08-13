#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");

    int n = 0;
    int n1 = 0;

    while (1) {

        printf("Digite um número: \n");
        scanf("%d", &n);

        printf("Agora digite outro número: \n");
        scanf("%d", &n1); 

        if (n > n1) {
            printf("O número %d é maior que %d\n", n, n1);
        } else if (n < n1) {
            printf("O número %d é menor que %d\n", n, n1);
        } else {
            printf("Os dois números são iguais.\n");
        }
        
        break;
    }

    return 0;
}

