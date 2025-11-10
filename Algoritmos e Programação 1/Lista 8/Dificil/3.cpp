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
	
	int x = 0, idL = 0, idC = 0;
	int limit = 10;
	printf("\nPor fim informe um numero de %d a %d: ", (limit-limit), limit);
	scanf("%d", &x);

	int QTLin = N;
	int QTCol = M;
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	//Ler
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % limit;		
		}	
	}
	
	//Exibir
	printf("\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
	
	//Achar Numero X
	printf("\nOnde aparece o numero %d informado pelo usuario:\n", x);
	printf("\tLinha\t|\tColuna\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (num[lin][col] == x){
				idL = lin;
				idC = col;
				printf("\t%d\t|\t%d\n", idL, idC);	
			}	
		}	
	}
	
	return 0;
}
