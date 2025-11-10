#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	char c[100];
	int i;
	
	printf("Escreva uma frase: ");
	gets(c);
	
	while (c[i] != '\0'){
		if (int(c[i]) != 32){
			printf("%c", c[i]);
		}
		i++;
	}
	
	return 0;
}
