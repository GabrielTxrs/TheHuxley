#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void contador_de_vogais(char *string)
{
	int conta = 0; 
	int conte = 0; 
	int conti = 0; 
	int conto = 0; 
	int contu = 0;
	
	for(int i = 0; i < strlen(string); i++)
	{
	   	if(string[i] == 'a' || string[i] == 'A')
	    {
	    	conta++;
		}
	    if(string[i] == 'e' || string[i] == 'E')
	    {
	    	conte++;
		}
	    if(string[i] == 'i' || string[i] == 'I')
	    {
	    	conti++;
		}
	    if(string[i] == 'o' || string[i] == 'O')
	    {
	    	conto++;
		}
	    if(string[i] == 'u' || string[i] == 'O')
	    {
	    	contu++;
	    }
	}
	printf("a %d\n",conta);
	printf("e %d\n",conte);
	printf("i %d\n",conti);
	printf("o %d\n",conto);
	printf("u %d\n",contu);
	return;
}

int main(){
    
    char string[100];
    
    scanf("%100[^\n]s", string);

	contador_de_vogais(string);
}




