/*
Escrever um programa que l� um n�mero N. Este N � o tamanho de um array.

Em seguida, leia cada um dos N n�meros do array, encontre o menor elemento desse array, a sua posi��o dentro do array e imprima essas informa��es.

Considere que o array come�a na posi��o 0

Formato de entrada

A primeira linha da entrada cont�m um inteiro N (1 <N <1000), indicando o n�mero de elementos que devem ser lidos no array de n�meros inteiros. A segunda linha cont�m cada um dos valores de N, separadas por um espa�o.

Obs: n�o haver�o n�meros repetidos.

Formato de sa�da

A primeira linha exibe a mensagem "Menor valor:" seguido por um espa�o e o menor n�mero lido na entrada. 
A segunda linha exibe a mensagem "POSI��O:" seguido por um espa�o e a posi��o do array em que o 
menor n�mero � encontrado, lembrando que o array come�a na posi��o zero.

Entrada
10
1 2 3 4 -5 6 7 8 9 10

Sa�da
Menor valor: -5
Posicao: 4

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int posmenor(int * vetor, int tam)
{
    int pos = 0;
    int menor = vetor[0];
    int i = 1;
    
    for(; i < tam; i++)
    {
        if (vetor[i] < menor)
        {
        menor = vetor[i];
        pos = i;
            
        }
    }
    return pos;
}  

	
int main() {
   
    int n;
    scanf("%d",&n);
    fflush(stdin);
    int x = 0;
    char c = 0;
    
    int v[n];
    
    for(;x < n;x++){
		scanf("%d%c",&v[x], &c);
	}
    printf("Menor valor: %d\n",v[posmenor(v,n)]);
    printf("Posicao: %d",posmenor(v,n));
    
	return 0;
}
