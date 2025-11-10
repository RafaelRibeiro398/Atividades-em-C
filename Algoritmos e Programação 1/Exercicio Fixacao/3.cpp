#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void contador (int*, int);

int main() {
	int i, contadorN, passo, escolha;
	i = 0;
	contadorN = 0;
	
	printf ("Informe o numero inicial do contador: ");
	scanf("%d", &contadorN);
	
	while (i < 1) {
		printf("Informe o valor do incremento a ser adicionado no contador: ");
		scanf("%d", &passo);
		
		contadorN = contadorN + passo;
		contador(&contadorN, passo);
		
		
		printf("\n Deseja continuar a incrementar no contador? \n 1 - SIM \n 0 - NAO \n : ");
		scanf("%d", &escolha);
		switch(escolha){
			case 1:{
				break;
			};
			case 0: {
				i = 1;
				break;
			};
		};	
	};
	
	printf("Valor final do contador: %d", contadorN);
	
}

void contador (int *contadorN, int passo) {
	printf("Valor atual do contador: %d", *contadorN);
};
