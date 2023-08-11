#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int m,int n)
{
	if(n == 0) 
	{
		return m;
	}
	else
	{
		return mdc(n, m%n);
	}	
}
int main() 
{
    int a, b;
    
    scanf("%d",&a);
    fflush(stdin);
    scanf("%d",&b);
    
    printf("%d",mdc(a,b));
	return 0;
}
