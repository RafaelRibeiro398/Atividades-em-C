#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void fatorial(int, int, int*);

int main() {
	int n, i, result;
	
	printf("Informe um numero: ");
	scanf("%d", n);
	
	result = n;
	i = n;
	fatorial(n, i, &result);
	
	return 0;
}

void fatorial(int n, int i, int *result) {
	while (i > 0) {
		printf("%d", result);
		i --;
		result = result * i;
	}
}
