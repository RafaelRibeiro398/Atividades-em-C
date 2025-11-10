#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	char c[100], x[100];
	int i, o;
	
	printf("Escreva uma frase: ");
	gets(c);
	
	while (c[i] != '\0'){
		if (int(c[i]) >= 65){
			x[o] = c[i]; 
			o++;
		}
		i++;
	}
	
	printf("\n Frase Original: ");
	puts(c);
	
	printf("\n Frase sem Numeros:  ");
	puts(x);
	
	return 0;
}
