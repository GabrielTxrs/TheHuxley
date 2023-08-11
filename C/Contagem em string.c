/*

Entrada
Este texto eh ruim

Saída
0

Entrada
A arvore azul de Ana eh linda

Saída
6

Entrada
O rato roeu a roupa do rei de roma

Saída
4
 
*/

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char * removedor_de_espacos(char *string){
    int contador_de_letras = 0;
 
    for (int i = 0; string[i] != '\0'; i++){
    	
        if (string[i] != ' '){
        	
            string[contador_de_letras] = string[i];
            contador_de_letras++;
        }    
    }
    
    //Finally placing final character at the string end
    string[contador_de_letras] = '\0';
    return string;
}
 
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    char string[100], string2[100];
    int contador_de_as = 0;
    
    scanf("%100[^\n]s", string);
    
    strcpy(string2, removedor_de_espacos(string));
   
    for(int n = 0; n < strlen(string2); n++){
    	
    	if((string2[n] == 'a')|| (string2[n] == 'A')|| (string2[n] == '?') || (string2[n] == '?')){
    		contador_de_as++;
		}
	}
	printf("%d",contador_de_as);
}


