#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int nota, n1, n2, n3, i;
	float idade, mediaidade, porcN2;
	
	n1 = 0;
	n2 = 0;
	n3 = 0;
	mediaidade = 0;
	
	printf("SISTEMAS DE NOTAS: \n");
	printf("1 - Regular \n");
	printf("2 - Bom \n");
	printf("3 - Excelente \n");
	printf("\n");
	
	i = 1;
	while (i <= 20) {
		printf("Informe a sua idade: ");
		scanf("%f", &idade);
	
		
		
		printf("Qual a nota pro filme: ");
		scanf("%d", &nota);
		
		switch (nota){
			case 1: {
				n1++;
				break;
			} ;
			case 2: {
				n2++;
				break;
			} ;
			case 3: {
				n3++;
				mediaidade = mediaidade + idade;
				break;
			} ;
		};
		
		i ++;
	};
	
	mediaidade = mediaidade / float(n3);
	
	printf("\n");
	printf("\n Media das idades de quem respondeu excelente: %f", mediaidade);
	printf("\n Quantos responderam regular: %d", n1);
	printf("\n Porcentagem de quem respondeu 'bom': %.2f %", porcN2);
	
	
	
	return 0;	
};
