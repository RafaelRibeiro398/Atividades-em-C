#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void palindromo(char[]);

int main() {
	char c[100];
	
	printf("Informe uma palavra: ");
	gets(c);
	palindromo(c);
	
	return 0;
}

void palindromo(char c[]){
	int result, i, x, count = 0;
	
	while (c[i] != '\0'){
		i++;	
	}
	
	while (i > 0) {
		if (c[i-1] == c[x]){
			count++;
		}
		i--;
		x++;	
	}
	
	if (count == x){
		result = 1;
	}
	
	switch(result){
		case 1:{
			printf("\nA palavra EH um palindromo");
			break;
		}
		case 0:{
			printf("\nA palavra NAO EH um palindromo");
			break;
		}
	}
}
