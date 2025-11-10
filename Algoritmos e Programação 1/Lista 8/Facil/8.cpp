#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 7
#define QTCol 7

void ler(int[QTLin][QTCol]);
void exibir_antes(int[QTLin][QTCol]);
void exibir_depois(int[QTLin][QTCol]);

int main() {
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	ler(num);
	printf("MATRIZ ANTES DA TROCA:\n");
	exibir_antes(num);
	printf("\n\nMATRIZ DEPOIS DA TROCA:\n");
	exibir_depois(num);
	
	return 0;
}

void ler(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 100;		
		}	
	}
}

void exibir_antes(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
}

void exibir_depois(int num[QTLin][QTCol]) {
	int x[1][1];
	for (int col = 0; col < QTCol; col++) {
		x[0][0] = num[0][col];
		num[0][col] = num[6][col];
		num[6][col] = x[0][0];
	}
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
}
