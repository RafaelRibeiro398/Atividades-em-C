#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	char c[100];
	int i;
	
	printf("Informe um palavra para ser invertida: ");
	gets(c);
	
	while(c[i] != '\0'){
		i++;
	}
	
	while(i >= 0){
		printf("%c", c[i--]);
	}
	
	return 0;
}
