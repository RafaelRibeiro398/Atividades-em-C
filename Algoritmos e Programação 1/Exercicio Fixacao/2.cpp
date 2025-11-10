#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float media(float, float);
void verificar(float, int*);

int main() {
	float n1, n2, mediaN;
	int aprovado;
	
	mediaN = media(n1, n2);
	printf("\n Média final: %.1f", mediaN);
	verificar(mediaN, &aprovado);
	
	switch(aprovado){
		case 1: {
			printf("\n \n Aluno APROVADO");
			break;
		};
		case 0: {
			printf("\n \n Aluno REPROVADO");
			break;
		};
	};
};

float media(float n1, float n2){
	printf("CALCULO DE MEDIA (2 notas)");
	printf("\n Valor da Primeira nota: ");
	scanf("%f", &n1);
	printf("\n Valor da Segunda nota: ");
	scanf("%f", &n2);
	
	return ( (n1 + n2) / 2);	
};

void verificar(float mediaN, int *aprovado){
	if (mediaN >= 6) {
		*aprovado = 1;
	}
	else {
		*aprovado = 0;
	};
};
