#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int N = 0;
	printf("Informe o valor de N (quantidade de linhas/colunas): ");
	scanf("%d", &N);

	int QTLin = N;
	int QTCol = N;
	
	int num1[QTLin][QTCol];
	int num2[QTLin][QTCol];
	int num3[QTLin][QTCol];
	
	srand(time(NULL));
	
	//Ler matriz 1 e 2, calcular matriz 3
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num1[lin][col] = rand() % 10;		
			num2[lin][col] = rand() % 10;
			num3[lin][col] = num1[lin][col] + num2[lin][col];
		}	
	}
	
	//Exibir Matriz 1
	printf("\nPrimeira Matriz:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num1[lin][col]);
		}
		printf("\n");	
	}
	
	//Exibir Matriz 2
	printf("\nSegunda Matriz:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num2[lin][col]);
		}
		printf("\n");	
	}
	
	//Exibir Matriz 3
	printf("\nTerceira Matriz:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num3[lin][col]);
		}
		printf("\n");	
	}
	
	return 0;
}
