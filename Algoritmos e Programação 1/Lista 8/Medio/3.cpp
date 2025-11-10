#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int QTLin = 4;
	int QTCol = 4;
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	//Ler Matriz Original
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 100;	
		}	
	}
	
	//Exibir Matriz Original
	printf("Matriz Original:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
	
	//Pares e Impares
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (num[lin][col] % 2 == 0) {
				num[lin][col] = 0;
			}
			else{
				num[lin][col] = 1;
			}
		}
	}
	
	//Exibir Matriz Alterada
	printf("Matriz Alterada:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
		
	return 0;
}
