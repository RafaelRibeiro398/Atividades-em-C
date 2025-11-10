#include <stdio.h>
#include <string.h>

struct Aluno {
	char nome[100];
	float nota;
};

int main() {
	struct Aluno aluno1;
	struct Aluno aluno2;
	
	printf("Nome do Primeiro aluno: ");
	scanf("%s", aluno1.nome);
	
	printf("Nota do Primeiro aluno: ");
	scanf("%f", &aluno1.nota);
	
	printf("\nNome do Segundo aluno: ");
	scanf("%s", aluno2.nome);
	
	printf("Nota do Primeiro aluno: ");
	scanf("%f", &aluno2.nota);
	
	printf("\n\nLista de alunos:");
	printf("\n1 -> Nome: %s, Nota: %.1f", aluno1.nome, aluno1.nota);
	printf("\n2 -> Nome: %s, Nota: %.1f", aluno2.nome, aluno2.nota);
	
	if (aluno1.nota > aluno2.nota){
		printf("\n%s tem a maior nota", aluno1.nome);
	}
	else {
		printf("zn%s tem a maior nota", aluno2.nome);	
	}
	
	return 0;
}
