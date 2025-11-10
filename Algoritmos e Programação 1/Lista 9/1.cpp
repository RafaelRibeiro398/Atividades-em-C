#include <stdio.h>
#include <string.h>

struct Produto{
	char nome[50];
	float preco;
};

int main() {
	int n = 3;
	struct Produto produtos[n];
	
	
	for (n = 0; n < 3; n++){
		printf("\nInforme o nome do produto N.%d: ", (n+1));
		scanf("%s", produtos[n].nome);
		printf("\nInforme o preco do produto N.%d: ", (n+1));
		scanf("%f", &produtos[n].preco);		
	}
	
	printf("\n\nLista de Produtos:");
	for (n = 0; n < 3; n++){
		printf("\n%d -- %s -- R$%.2f", (n+1), produtos[n].nome, produtos[n].preco);
	}
	
	
	
	return 0;
}
