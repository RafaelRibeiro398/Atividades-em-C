#include <stdio.h>
#include <string.h>

struct Data {
	int dia;
	int mes;
	int ano;
};

int main() {
	struct Data d;
	
	printf("Informe um Dia: ");
	scanf("%d", &d.dia);
	
	printf("Informe um Mes: ");
	scanf("%d", &d.mes);
	
	printf("Informe um Ano: ");
	scanf("%d", &d.ano);
	
	printf("\nData Informada: %d/%d/%d", d.dia, d.mes, d.ano);
	
	return 0;
}
