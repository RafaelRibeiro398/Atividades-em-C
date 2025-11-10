#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	char c[100];
	int count, i;
	
	printf("Informe uma palavra: ");
	gets(c);
	
	printf("\nAgora informe quantas vezes a palavra sera repetida: ");
	scanf("%d", &count);
	
	printf("\nString final: ");
	while (count > 0){
		i = 0;
		while (c[i] != '\0'){
			printf("%c", c[i]);
			i++;
		}
		count--;
	}
	
	return 0;
}
