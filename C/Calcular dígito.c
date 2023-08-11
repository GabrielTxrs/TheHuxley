#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int maior3(int a, int b, int c)
{
	if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

void calcular_digito(char *string)
{
	int n1, n2, n3;
	
	n1 = maior3(string[0]-'0', string[1]-'0', string[2]-'0');
	n2 = maior3(string[4]-'0', string[5]-'0', string[6]-'0');
	n3 = maior3(string[8]-'0', string[9]-'0', string[10]-'0');
	
	if(((n1 + n2 + n3)%10) == string[12]-'0')
	{
		printf("VALIDO\n");
	}
	else
	{
		printf("INVALIDO\n");
	}
}

int main()
{
	char entrada[100];
	
    while(entrada[0] != 'F' && entrada[1] != 'I' && entrada[2] != 'M')
    {
    	gets(entrada);
    		if(entrada[0] == 'F' && entrada[1] == 'I' && entrada[2] == 'M')
		{
			return 1;
		}
    	calcular_digito(entrada); 
	}
}
