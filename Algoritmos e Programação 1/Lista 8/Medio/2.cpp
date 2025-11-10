#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int QTLin = 3;
	int QTCol = 2;
	int num1[QTLin][QTCol];
	int num2[QTCol][QTLin];
	
	srand(time(NULL));
	
	//Ler Matriz Original
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num1[lin][col] = rand() % 100;
			num2[col][lin] = num1[lin][col];	
		}	
	}
	
	//Exibir Matriz Original
	printf("Matriz Original:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num1[lin][col]);
		}
		printf("\n");	
	}
	
	//Exibir Matriz Transposta
	printf("Matriz Transposta:\n");
	for (int lin = 0; lin < QTCol; lin++) {
		for(int col = 0; col < QTLin; col++) {
			printf("%d\t", num2[lin][col]);
		}
		printf("\n");	
	}
		
	return 0;
}
