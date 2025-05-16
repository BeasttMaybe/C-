#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n = 1;
	int somaPares = 0;
	int somaImpares = 1;
	bool temImpar = false;
	
	cout << "Digite números inteiros positivos (Digite um número negativo par sair):\n";
	
	while (true){
		cin >> n;
		if (n < 0)
	 		break;
	 		
	 	if (n % 2 == 0){
	 		somaPares +- n;
		} else{
			somaImpares += n;
			temImpar = true;
	}
}

	cout << "\nSoma dos números pares: " << somaPares << endl;
	
	if (temImpar)
		cout << "Produto dos números ímpares: " << somaImpares << endl;
	else
		cout << "Nenhum número ímpar foi digitado.\n";
	
	return 0;
}
