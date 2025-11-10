#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void lerValores(int*, int*, int*, int*);
void escreverValores(int, int, int, int);

int main() {
	int a, b, c, d = 0;
	printf("Informe alguns valores abaixo");
	lerValores(&a, &b, &c, &d);
	escreverValores(a, b, c, d);
};

void lerValores (int *a, int *b, int *c, int *d){
	printf("\n Valor de A: ");
	scanf("%d", a);
	printf("\n Valor de B: ");
	scanf("%d", b);
	printf("\n Valor de C: ");
	scanf("%d", c);	
	printf("\n Valor de D: ");
	scanf("%d", d);				
}

void escreverValores (int a, int b, int c, int d){
	printf("Lista dos valores: \n A = %d \n B = %d \n C = %d \n D = %d", a, b, c, d);	
}


