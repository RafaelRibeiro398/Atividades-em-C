#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void quantidade(char[]);

int main() {
	char c[100];
	
	printf("Escreva uma palavra: ");
	gets(c);
	
	strupr(c);
	
	quantidade(c);
	
	return 0;
}

void quantidade(char c[]){
	int i = 0;
	char count[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	i = 0;
	
	while (c[i] != '\0') {
		switch(c[i]) {
			case 65:{
				count[0];
				break;
			}
		}	
		i++;
	}
	puts(count);
}
