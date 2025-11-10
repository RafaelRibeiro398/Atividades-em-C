#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 6
#define QTCol 6

void ler(int[QTLin][QTCol]);
void exibir(int[QTLin][QTCol]);

int main() {
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	ler(num);
	exibir(num);
	
	return 0;
}

void ler(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 10;		
		}	
	}
}

void exibir(int num[QTLin][QTCol]) {
	int soma = 0;
	
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
			soma = soma + num[lin][col];
		}
		printf("\tSoma da linha: %d", soma);
		soma = 0;
		printf("\n");	
	}
}
