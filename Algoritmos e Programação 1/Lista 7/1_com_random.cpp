#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void mostrar(int[]);

int main() {
	int n[10];
	
	srand(time(NULL));
	
	for(int i = 0; i <= 9; i++) {
		n[i] = rand() % 10;	
	}
	
	mostrar(n);
	
	return 0;
}

void mostrar(int n[]) {
	printf("\nVeja o numero formado: ");
	
	printf("\nInicio ao fim: ");
	for(int i = 0; i <= 9; i++){
		printf("%d", n[i]);	
	}
	
	printf("\nFim ao inicio: ");
	for(int i = 9; i >= 0; i--){
		printf("%d", n[i]);	
	}
	
}
