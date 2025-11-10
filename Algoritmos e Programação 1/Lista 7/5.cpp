#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

bool verificar(int[], int[], int);

int main() {
	int N = 10;
	int z[N];
	int x[N];
	int i = 0;
		
	srand(time(NULL));
	
	for(i = 0; i <= N; i++) {
		z[i] = (rand() % 2);
		x[i] = (rand() % 2);
	}
	
	// Prints
	printf("Primeiro Vetor: ");
	for(i = 0; i < N; i++) {
		printf("%d", z[i]);
	}
	
	printf("\nSegundo Vetor: ");
	for(i = 0; i < N; i++) {
		printf("%d", x[i]);
	}
	
	// Verificação
	printf("\nAmbos sao iguais: ");
	if (verificar(z, x, N) == true) {
		printf("\nVERDADEIRO");	
	}
	else {
		printf("\nFALSO");		
	}
	
	return 0;
}

bool verificar(int z[], int x[], int N) {
	int a = 0;
	for (int i = 0; i < N; i++) {
		if (z[i] == x[i]) {
			a++;	
		}
	}
	if (a == N) {
		return true;
	}
	else {
		return false;
	}
}


