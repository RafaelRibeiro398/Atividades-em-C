#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, i, soma;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d", &n2);
	
	soma = 0;
	while (i < n2) {
		soma = soma + n1;
		i = i + 1;
	};
	
	printf("\n Resultado final: %d", soma);
	
	return 0;
}
