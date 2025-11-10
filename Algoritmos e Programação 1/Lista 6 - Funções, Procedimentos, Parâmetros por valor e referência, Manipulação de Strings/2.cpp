#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int contarVogais(char[]);

int main() {
	char c[100];
	
	printf("Informe uma palavra para ser contada a quantidade de vogais presente na mesma: ");
	gets(c);
	
	contarVogais(c);
	
	return 0;
}

int contarVogais(char c[]) {
	int i, v;
	while (c[i] != '\0') {
		if ((int(c[i])==97) or (int(c[i])==101) or (int(c[i])==105) or (int(c[i])==111) or (int(c[i])==117) or (int(c[i])==65) or (int(c[i])==69) or (int(c[i])==73) or (int(c[i])==79) or (int(c[i])==85)){
			v++;
		}
		
		i++;
	}
	
	return printf("O texto possui %d vogais.", v);	
}
