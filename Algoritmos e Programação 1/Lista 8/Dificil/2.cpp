#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int QTLin = 4;
	int QTCol = 4;
	
	int num1[QTLin][QTCol];
	int num2[QTLin][QTCol];
	
	srand(time(NULL));
	
	int x = 3;
	
	//Ler matriz 1 e 2
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num1[lin][col] = rand() % 100;
			num2[col][x] = num1[lin][col];
		}
		x--;
	}
	
	//Exibir Matriz 1
	printf("\nMatriz Original:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num1[lin][col]);
		}
		printf("\n");	
	}
	
	//Exibir Matriz 2
	printf("\nMatriz Rotacionada:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num2[lin][col]);
		}
		printf("\n");	
	}
	
	return 0;
}
