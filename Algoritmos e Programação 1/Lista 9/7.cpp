#include <stdio.h>
#include <string.h>

/* Crie uma struct ContaBancaria com nome, 
número e saldo. Escreva uma função para 
depositar e uma para sacar. */

struct ContaBancaria {
	char nome[100];
	int numero;
	float saldo;
};

void deposito(float*);
void saque(float*);

int main() {
	struct ContaBancaria conta;
	int x = -1;
	
	// Cadastro
	printf("Boa noite, informe o nome que detem a conta: ");
	scanf("%s", conta.nome);
	printf("Alem disto, informe o numero da conta: ");
	scanf("%d", &conta.numero);	
	conta.saldo = 0;
	
	// Ações
	while (x != 0) {
		printf("\nMuito bem! Agora lhe darei algumas opcoes:");
		printf("\n1 - Depositar na conta");
		printf("\n2 - Sacar da conta");
		printf("\n0 - Sair");
		printf("\nOpcao escolhida: ");
		scanf("%d", &x);
		
		switch(x){
			case 1:{
				deposito(&conta.saldo);
				break;
			}
			case 2:{
				saque(&conta.saldo);
				break;
			}
			case 0:{
				printf("\n\nTenha um bom dia!");
				break;
			}
		}	
	}
	
	return 0;
}

void deposito(float *saldo) {
	float d = 0;
	
	printf("\nEscolha um valor a ser depositado: ");
	scanf("%f", &d);
	*saldo = *saldo + d;
	printf("Saldo atual: R$%.2f\n", *saldo);
}

void saque(float *saldo) {
	float s = 0;
	
	printf("\nEscolha um valor a ser sacado: ");
	scanf("%f", &s);
	*saldo = *saldo - s;
	printf("Saldo atual: R$%.2f\n", *saldo);	
}


