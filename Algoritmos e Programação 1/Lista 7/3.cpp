#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void mostrar(int[], int[]);

int main() {
	int n[10];
	int x[10];
	int i = 0;
		
	srand(time(NULL));
	
	for(i = 0; i <= 9; i++) {
		n[i] = rand() % 100;
		if (i % 2 == 0){
			x[i] = n[i] / 2;
		}
		else {
			x[i] = n[i] * 3;
		}	
	}
	
	mostrar(n,x);
	
	return 0;
}

void mostrar(int n[], int x[]) {
	printf("Saida dos numeros gerados: ");
	
	for(int i = 0; i <= 9; i++) {
		printf("\n%d Numero: %d -> %d", i, n[i], x[i]);
	}
}
