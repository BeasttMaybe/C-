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
	
	cout << "Digite n�meros inteiros positivos (Digite um n�mero negativo par sair):\n";
	
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

	cout << "\nSoma dos n�meros pares: " << somaPares << endl;
	
	if (temImpar)
		cout << "Produto dos n�meros �mpares: " << somaImpares << endl;
	else
		cout << "Nenhum n�mero �mpar foi digitado.\n";
	
	return 0;
}
