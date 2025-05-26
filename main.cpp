#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    const int MAX = 30;
    int numeros[MAX];
    int soma = 0;
    int count = 0; // Quantidade válida de números digitados

    std::cout << "Digite até 30 números entre 1 e 30 (digite 0 para parar):\n";

    for (int i = 0; i < MAX; i++) {
        int n;
        std::cout << "Número: ";
        std::cin >> n;

        if (n == 0) {
            break; // Sai do for se usuário digitar 0
        }

        if (n < 1 || n > 30) {
            std::cout << "Número inválido! Digite um número entre 1 e 30.\n";
            i--; // Não conta essa tentativa, repete a posição
            continue;
        }

        numeros[count] = n;
        soma += n;
        count++;
    }

    std::cout << "\nNúmeros digitados: ";
    for (int i = 0; i < count; i++) {
        std::cout << numeros[i] << " ";
    }

    std::cout << "\nSoma total: " << soma << std::endl;

    return 0;
}

