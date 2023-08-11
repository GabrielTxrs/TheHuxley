#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n;
    scanf("%d",&n);
    
    int i = 0;
    char c = 0;
    
    int v[n];
    
    //while(scanf("%d%c", &v[i++], &c) == 2);
	for(;i < n;i++)
	{
		scanf("%d%c",&v[i], &c);
	}
	
    if(n > 0)
    {
	i = n - 1;
	while(i > 0)
	{
		 printf("%d ", v[i--]);
	}
	printf("%d", v[0]);
    }
    return 0;
}
