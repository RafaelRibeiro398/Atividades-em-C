#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int N = 0;
	printf("Informe o valor de N (quantidade de linhas): ");
	scanf("%d", &N);
	
	int M = 0;
	printf("\nInforme o valor de M (quantidade de colunas): ");
	scanf("%d", &M);

	int QTLin = N;
	int QTCol = M;
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	//Ler
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 100;		
		}	
	}
	
	printf("\n");
	
	//Exibir
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
	
	printf("\nNumeros Pares: ");
	//Contagem Pares
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (num[lin][col] % 2 == 0){
				printf("%d, ", num[lin][col]);	
			}
		}	
	}
	
	return 0;
}
