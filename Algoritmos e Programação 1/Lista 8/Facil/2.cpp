#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 8
#define QTCol 5

int ler(int[QTLin][QTCol], int);
void exibir(int[QTLin][QTCol], int);

int main() {
	int num[QTLin][QTCol];
	int soma = 0;
	
	srand(time(NULL));
	
	exibir(num, ler(num, soma));
	
	return 0;
}

int ler(int num[QTLin][QTCol], int soma) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 10;
			soma = soma + num[lin][col];	
		}	
	}
	
	return soma;
}

void exibir(int num[QTLin][QTCol], int soma) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
	printf("\n\nSOMA FINAL: %d", soma);
}
