#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	float num1, num2, num3, num4;
	float media;
	
	scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
	
	media = ((num1 + num2 + num3 + num4)/4);
	
	printf("media: %.2f\n", media);
	
	if(media < 3){
		printf("reprovado com louvor");
	}
	else if(media >=3 && media < 7){
		printf("prova final");
	}
	else if(7 <= media && media < 9){
		printf("aprovado");
	}
	else if(media >= 9){
		printf("aprovado com louvor");
	}
	

}
