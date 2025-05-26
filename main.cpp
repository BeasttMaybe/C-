#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    const int MAX = 30;
    int numeros[MAX];
    int soma = 0;
    int count = 0; // Quantidade v�lida de n�meros digitados

    std::cout << "Digite at� 30 n�meros entre 1 e 30 (digite 0 para parar):\n";

    for (int i = 0; i < MAX; i++) {
        int n;
        std::cout << "N�mero: ";
        std::cin >> n;

        if (n == 0) {
            break; // Sai do for se usu�rio digitar 0
        }

        if (n < 1 || n > 30) {
            std::cout << "N�mero inv�lido! Digite um n�mero entre 1 e 30.\n";
            i--; // N�o conta essa tentativa, repete a posi��o
            continue;
        }

        numeros[count] = n;
        soma += n;
        count++;
    }

    std::cout << "\nN�meros digitados: ";
    for (int i = 0; i < count; i++) {
        std::cout << numeros[i] << " ";
    }

    std::cout << "\nSoma total: " << soma << std::endl;

    return 0;
}

