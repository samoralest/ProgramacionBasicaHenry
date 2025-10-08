#include <stdio.h>
int main() {
float numero_1, nuemro_2;
	printf("Ingrese el primer numero: \n");
	scanf("%f", &numero_1);
	printf("Ingrese el segundo numero: \n");
	scanf("%f", &nuemro_2);

	if(numero_1==nuemro_2){
	printf("los nuemros son iguales:");
	}
	else if(numero_1>nuemro_2){
	printf("el numero mayor es: %f ", numero_1 );	
	}
	else{
	printf("el numero mayor es: %f ", nuemro_2 );	
	}

	return 0;
}
