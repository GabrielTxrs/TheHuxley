/*

Entrada
2 5 7 1 1 3 5 8 0 7
1 4 2 7 6 5 1 1 9 2

Saída
3 9 9 8 7 8 6 9 9 9

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

  
int main() {
   
    int i = 0;
    char c = 0;
    char d = 0;
    
    int v[10];
    int u[10];
    int w[10];
    
    for(i=0;i < 10;i++){
		scanf("%d%c",&v[i], &c);
	}
	for(i=0;i < 10;i++){
		scanf("%d%c",&u[i], &d);
	}
    for(i=0;i < 10;i++){
    	w[i] = v[i]+u[i];
    	printf("%d ",w[i]);
	}
	return 0;
}
