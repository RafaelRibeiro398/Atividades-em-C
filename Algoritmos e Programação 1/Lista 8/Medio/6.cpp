#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 4
#define QTCol 4

void ler(int[QTLin][QTCol]);
void exibir(int[QTLin][QTCol]);
void soma(int[QTLin][QTCol]);

int main() {
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	ler(num);
	exibir(num);
	soma(num);
	
	return 0;
}

void ler(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 5;		
		}	
	}
}

void exibir(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
}

void soma(int num[QTLin][QTCol]) {
	int sum = 0;
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (
				(lin % 2 == 0) 
				&& 
				(col % 2 != 0)
				) {
					sum = sum + num[lin][col];	
				}
		}	
	}
	
	printf("Soma das linhas pares e colunas impares: %d", sum);		
}

