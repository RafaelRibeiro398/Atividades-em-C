#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int QTLin = 4;
	int QTCol = 4;
	int num[QTLin][QTCol];
	int diaP = 0;
	int diaS = 0;
	
	srand(time(NULL));
	
	//Ler Matriz
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 10;	
		}	
	}
	
	//Exibir Matriz
	printf("Matriz:\n");
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			printf("%d\t", num[lin][col]);
		}
		printf("\n");	
	}
	
	//Calculo Diagonal Principal e Secundária
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (lin == col){
				diaP = diaP + num[lin][col];
			}
			if ((lin + col) == 3) {
				diaS = diaS + num[lin][col];
			}
		}
	}	
	
	//Exibir Diagonais
	printf("\nSoma da Diagonal Principal: %d", diaP);
	printf("\nSoma da Diagonal Secundaria: %d", diaS);
		
	return 0;
}
