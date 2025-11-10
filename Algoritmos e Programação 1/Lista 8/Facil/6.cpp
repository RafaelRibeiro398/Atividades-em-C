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
	int num[QTLin][QTCol];
	
	int maior = 0;
	
	srand(time(NULL));
	
	//Ler
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 100;		
		}	
	}
	
	//Exibir
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
	
	//Maior
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if ((num[lin][col] > num[lin][col-1]) && (num[lin][col] > maior)) {
				maior = num[lin][col];
			}	
		}		
	}
	printf("\nMaior valor: %d", maior);
	
	return 0;
}
