#include <stdio.h>
#include <string.h>

struct Retangulo{
	int largura;
	int altura;		
};

int calc(int, int);

int main() {
	struct Retangulo r1;
	
	printf("Informe a Largura: ");
	scanf("%d", &r1.largura);
	
	printf("Informe a Altura: ");
	scanf("%d", &r1.altura);
	
	printf("\nArea resultante: %d", calc(r1.largura, r1.altura));
	
	return 0;
}

int calc(int largura, int altura){
	int area;
	area = largura * altura;
	return area;	
}
