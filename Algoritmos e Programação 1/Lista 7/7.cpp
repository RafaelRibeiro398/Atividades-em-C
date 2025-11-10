#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void comp(int[], int);

int main() {
	int n = 12;
	int vet[n];
	
	srand(time(NULL));
	
	for(int i = 0; i < n; i++) {
		vet[i] = rand() % 100;
		printf("\nNumero: %d, id - %d", vet[i], i);
	}
	
	comp(vet, n);
	
	return 0;
}

void comp(int vet[], int n) {
	int par = 0, impar = 0;
	
	for(int i = 0; i < n; i++) {
		if ((vet[i] % 2) == 0) {
			par++;
		}
		else{
			impar++;
		}
	}
	
	printf("\n\nQuantidade de pares: %d\n Quantidade de impares: %d", par, impar);
}
