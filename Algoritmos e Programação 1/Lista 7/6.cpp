#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n = 8;
	int vet[n];
	int maior = 0, idMa = 0, menor = 101, idMe = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i < n; i++) {
		vet[i] = rand() % 100;
		printf("\nNumero: %d, id - %d", vet[i], i);
	}
	
	for(int i = 0; i < n; i++){
		if ((vet[i] > vet[i-1]) && (vet[i] > maior)) {
			maior = vet[i];
			idMa = i;
		} 	
	}
	
	for(int i = 1; i < n; i++){
		if ((vet[i-1] < vet[i]) && (vet[i-1] < menor)) {
			menor = vet[i-1];
			idMe = i-1;
		} 	
	}
		
	printf("\n\n");
	printf("\nMaior numero: %d ---- Indice: %d", maior, idMa);
	printf("\nMenor numero: %d ---- Indice: %d", menor, idMe);
	
	return 0;
}
