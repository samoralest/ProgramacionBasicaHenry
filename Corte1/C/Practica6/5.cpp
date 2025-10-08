#include <stdio.h>
#include <string.h>
int main() {
float cantidad_apostada;
char lado [50];
	printf("ingrese la cantidad apostada: \n");
	scanf("%f", &cantidad_apostada );
	printf("ingrese el lado de la moneda (cara/cruz): \n");
	scanf("%s", &lado );
	
		if(strcmp(lado, "cara") == 0){
		printf("su ganancia es: %2f \n", cantidad_apostada*2 );
		}
		else{
		printf ("usted ha perdido todo \n");
		}
return 0;
}
