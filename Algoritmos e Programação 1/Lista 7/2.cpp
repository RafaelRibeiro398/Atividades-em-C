#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void mostrar(int[], int[]);

int main() {
	int n[10];
	int x[10];
	int i = 0;
	int a = 0;
		
	srand(time(NULL));
	
	for(i = 0; i <= 9; i++) {
		n[i] = rand() % 10;	
	}
	
	for(i = 9; i >= 0; i--) {
		x[a] = n[i];
		a++;	
	}
	
	mostrar(n,x);
	
	return 0;
}
void mostrar(int n[], int x[]) {
	printf("Saida dos numeros gerados: ");
	
	for(int i = 0; i <= 9; i++) {
		printf("\n%d -- %d", n[i], x[i]);
	}
}
