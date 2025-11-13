#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
Crie uma struct Filme com título e ano. 
Armazene 5 filmes em um vetor. 
Ordene o vetor de filmes pelo ano de lançamento. 
Exiba os filmes na nova ordem.
*/

struct Filme {
	char titulo[100];
	int ano;
};

int main() {
	struct Filme filmes[5];
	
	printf("CADASTRO DE FILMES!\n");
	
	for (int i = 0; i < 5; i++){
		printf("\nFilme %d:", i+1);
		printf("\ntitulo -> ");
		scanf("%s", filmes[i].titulo);
		printf("ano -> ");
		scanf("%d", &filmes[i].ano);
		printf("\n");
	}
	
	// Exibir antes de ordenar
	printf("\nFILMES CADASTRADOS (SEM ORDEM): ");
	for (int i = 0; i < 5; i++){
		printf("%s(%d), ", filmes[i].titulo, filmes[i].ano);
	}
	
	// Ordenação
	struct Filme copy;
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			if (filmes[j].ano > filmes[j+1].ano){
				
				strcpy(copy.titulo, filmes[j].titulo);
				strcpy(filmes[j].titulo, filmes[j+1].titulo);
				strcpy(filmes[j+1].titulo, copy.titulo);
				
				copy.ano = filmes[j].ano;
				filmes[j].ano = filmes[j+1].ano;
				filmes[j+1].ano = copy.ano;
			}
		}
	}
	
	// Exibir depois de ordenar
	printf("\nFILMES CADASTRADOS (EM ORDEM DE LANCAMENTO): ");
	for (int i = 0; i < 5; i++){
		printf("%s(%d), ", filmes[i].titulo, filmes[i].ano);
	}
	
	return 0;
}
