#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 5
#define QTCol 5

void ler(int[QTLin][QTCol]);
void exibir(int[QTLin][QTCol]);
bool verif(int[QTLin][QTCol]);

int main() {
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	ler(num);
	exibir(num);
	if (verif(num)) {
		printf("\nMatriz Esparsa");
	}
	else {
		printf("\nMatriz Nao Esparsa");
	}
	
	return 0;
}

void ler(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 2;		
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

bool verif(int num[QTLin][QTCol]){
	int quant = QTLin * QTCol;
	int x = 0;
	
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (num[lin][col] == 0) {
				x++;
			}	
		}	
	}
	
	if (x > ((QTLin * QTCol) / 2)){
		return true;
	}
	else {
		return false;
	}	
}
