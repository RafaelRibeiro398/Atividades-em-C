#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/* 
Crie uma struct Jogo com nome do 
timeA, timeB e gols de cada. 
Leia 5 jogos e mostre os placares.
*/

struct Jogo {
	char timeA[50];
	int golsTimeA;
	char timeB[50];
	int golsTimeB;
};

int main(){
	srand(time(NULL));
	
	struct Jogo jogos[5];
	
	printf("TABELA DE JOGOS\n");
	
	for (int i = 0; i < 5; i++){
		printf("Nome do TimeA: ");
		scanf("%s", jogos[i].timeA);
		printf("Nome do TimeB: ");
		scanf("%s", jogos[i].timeB);
		jogos[i].golsTimeA = rand() % 10;
		jogos[i].golsTimeB = rand() % 10;
		printf("\n");
	}
	
	printf("\nRESULTADOS");
	
	for (int i = 0; i < 5; i++){
		printf("\n%d. JOGO --> %s vs %s --> %d a %d", i+1, jogos[i].timeA, jogos[i].timeB, jogos[i].golsTimeA, jogos[i].golsTimeB);
	}
	
	return 0;
}


