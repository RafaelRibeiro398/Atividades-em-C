#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 5
#define QTCol 5

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
			num[lin][col] = rand() % 100;		
		}	
	}
}

void exibir(int num[QTLin][QTCol]) {
	int diagonal[5];
	int i = 0;
	
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
			
			if (lin == col){
				diagonal[i] = num[lin][col];
				i++;
			}
		}
		printf("\n");	
	}
	
	printf("\nLISTA DE ELEMENTOS DA DIAGONAL PRINCIPAL: ");
	for (i = 0; i < 5; i++) {
		printf("%d\t", diagonal[i]);
	}
}
