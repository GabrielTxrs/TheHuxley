#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void derivada (int *coeficiente, int *expoente)
{
    *coeficiente = (*coeficiente)*(*expoente);
	*expoente = (*expoente - 1);
}

char sinal(int coeficiente)
{
	if(coeficiente >= 0)
	{
		return '+';
	}
	else 
	    return '-';
}

void main()
{
	int coeficiente, expoente;
	
	char var;
	
    int monomios = 0;
	scanf("%d", &monomios);
	
	while(monomios != 0)
	{
		int laco = 0;
	    for (int cont = 0; cont < monomios ; cont++)
	    {
		    scanf("%d %c %d", &coeficiente, &var , &expoente);
		    
		    if(coeficiente == 0 || expoente == 0)
		    {
		    	continue;
			}
	    	if(cont == 0) 
			{
	    		printf("f'(%c)=", var);
			}
			
			derivada(&coeficiente, &expoente);
			
			if(expoente == 0)
			{
				printf("%c%d", sinal(coeficiente), abs(coeficiente));
			}
			else
			{
				printf("%c%d%c^%d", sinal(coeficiente), abs(coeficiente), var, expoente);
			}
            laco++;
        }
		if(laco == 0)
		{
			printf("0\n");
		}
		else 
		{
			printf("\n");
		}
		scanf("%d", &monomios);
	}
}

