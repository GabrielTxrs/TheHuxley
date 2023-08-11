#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int tamstr(char *string)
{
	char *ponteiro = NULL;
	ponteiro = string;
	
	int tamanho = 0;
	int i = 0;
	while(ponteiro[i] != '\0')
	{
		tamanho++;
		i++;
	}
	
	return tamanho;
}

int main() 
{
	int a = 1;
	
	char str[10];
	
	while(a)
	{
		scanf("%s", str);
		if(str[0] != 'F' && str[1] != 'I' && str[2] != 'M')
		{
			printf("%d\n",tamstr(str));
		}
		else
		{
			break;
		}
	}
	return 0;
}
