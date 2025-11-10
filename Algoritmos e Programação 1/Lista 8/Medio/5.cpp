#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTLin 3
#define QTCol 3

void ler(int[QTLin][QTCol]);
void exibir(int[QTLin][QTCol]);
bool verif(int[QTLin][QTCol]);

int main() {
	int num[QTLin][QTCol];
	
	srand(time(NULL));
	
	ler(num);
	exibir(num);
	printf("\nSimetrica: ");
	if (verif(num) == true){
		printf("SIM");
	}
	else{
		printf("NAO");
	}
	
	return 0;
}

void ler(int num[QTLin][QTCol]) {
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			num[lin][col] = rand() % 3;		
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
	int s = 0;
	for (int lin = 0; lin < QTLin; lin++) {
		for(int col = 0; col < QTCol; col++) {
			if (num[lin][col] == num[col][lin]){
				s++;
			}
		}	
	}
	if (s == (QTLin * QTCol)){
		return true;
	}
	else{
		return false;
	}	
}

