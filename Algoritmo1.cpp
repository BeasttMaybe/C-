#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int n = 0;
	
	while(1) {
		
	printf("Digite um numero (Coloque 0 para sair): ");
	scanf("%d", &n);
	
	if(n == 0){
		printf("Programa encerrado!\n");
		break;
	}
	
	if (n % 2 == 0){
		printf("Seu numero é par\n");
	
	} else {
		printf("Seu numero é impar\n"); 
	}
	
	if (n > 0){
		printf("Seu numero é positivo\n");
	} else {
		printf("Seu numero é negativo\n");
	}
	
	if (n % 5 == 0){
		printf("Seu numero é multiplo de 5\n");
	} else{
		printf("Seu numero não é multiplo de 5\n");
	}	
	
}
}
