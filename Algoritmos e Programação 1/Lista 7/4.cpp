#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void funcoes(int[], int[]);

int main() {
	int n[20];
	int x[20];
	int i = 0;
		
	srand(time(NULL));
	
	for(i = 0; i <= 19; i++) {
		n[i] = rand() % 10;
		x[i] = rand() % 10;	
	}
	
	funcoes(n, x);
	
	return 0;
}

void funcoes(int n[], int x[]) {
	int sub[20];
	int soma[20];
	int mul[20];
	
	int i = 0;
	
	for(i = 0; i <= 19; i++) {
		sub[i] = n[i] - x[i];
		soma[i] = n[i] + x[i];
		mul[i] = n[i] * x[i];	
	}
	
	// Prints
	printf("Primeiro Vetor: ");
	for(i = 0; i <= 19; i++) {
		printf("%d, ", n[i]);
	}
	
	printf("\nSegundo Vetor: ");
	for(i = 0; i <= 19; i++) {
		printf("%d, ", x[i]);
	}
	
	printf("\nTerceiro Vetor (Subtracao): ");
	for(i = 0; i <= 19; i++) {
		printf("%d, ", sub[i]);
	}
	
	printf("\nQuarto Vetor (Soma): ");
	for(i = 0; i <= 19; i++) {
		printf("%d, ", soma[i]);
	}
	
	printf("\nQuinto Vetor (Multiplicacao): ");
	for(i = 0; i <= 19; i++) {
		printf("%d, ", mul[i]);
	}	
}
