/*

Entrada
5 10
0 5
2 7
3 3
5 2
7 0

Saída
N

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define b 2

int main()
{
	int n, c, sai, ent;
	int capandar = 0;
	char nao[b] = {"N"};
	char sim[b] = {"S"};
	char retorno[b];
	
	scanf("%d %d", &n, &c);
	
	while(n > 0){
		n--;
		scanf("%d %d", &sai, &ent);
		capandar = capandar - sai + ent;
		if(capandar > c){
			strcpy(retorno,sim);
			break;
		}
		else{
			strcpy(retorno,nao);
		}
	}
	printf("%s",retorno);
	
}
