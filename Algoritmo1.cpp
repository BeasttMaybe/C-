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
		printf("Seu numero � par\n");
	
	} else {
		printf("Seu numero � impar\n"); 
	}
	
	if (n > 0){
		printf("Seu numero � positivo\n");
	} else {
		printf("Seu numero � negativo\n");
	}
	
	if (n % 5 == 0){
		printf("Seu numero � multiplo de 5\n");
	} else{
		printf("Seu numero n�o � multiplo de 5\n");
	}	
	
}
}
