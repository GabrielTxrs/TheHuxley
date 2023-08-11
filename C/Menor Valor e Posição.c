/*
Escrever um programa que lê um número N. Este N é o tamanho de um array.

Em seguida, leia cada um dos N números do array, encontre o menor elemento desse array, a sua posição dentro do array e imprima essas informações.

Considere que o array começa na posição 0

Formato de entrada

A primeira linha da entrada contém um inteiro N (1 <N <1000), indicando o número de elementos que devem ser lidos no array de números inteiros. A segunda linha contém cada um dos valores de N, separadas por um espaço.

Obs: não haverão números repetidos.

Formato de saída

A primeira linha exibe a mensagem "Menor valor:" seguido por um espaço e o menor número lido na entrada. 
A segunda linha exibe a mensagem "POSIÇÃO:" seguido por um espaço e a posição do array em que o 
menor número é encontrado, lembrando que o array começa na posição zero.

Entrada
10
1 2 3 4 -5 6 7 8 9 10

Saída
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
