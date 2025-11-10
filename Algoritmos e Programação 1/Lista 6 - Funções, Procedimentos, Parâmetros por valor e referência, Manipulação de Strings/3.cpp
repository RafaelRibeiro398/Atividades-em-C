#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ler(char[]);
void contaPalavras(char[]);

int main() {
	char c[100];
	
	ler(&c[100]);
	
	contaPalavras(&c[100]);
	
	return 0;
}

void ler(char c[]) {
	printf("Escreva uma frase: ");
	gets(c);
}

void contaPalavras(char c[]){
	int count, i = 0;
	
	while (c[i] != '\0') {
		if (c[i] == ' '){
			count++;
		}
		i++;
	}
	count++;
	
	printf("\nA frase possui %d palavras", count);	
}
