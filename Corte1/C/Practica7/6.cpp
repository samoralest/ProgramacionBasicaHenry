#include <stdio.h>
int main() {
int numero_1, numero_2, numero_3;	
int max, min;

	 printf("Ingrese el primer numero: \n");
	 scanf("%d", &numero_1);
	 printf("Ingrese el segundo numero: \n");
	 scanf("%d", &numero_2);
	 printf("Ingrese el tercer numero: \n");
	 scanf("%d", & numero_3);
	 
	 max=numero_1;
	 min=numero_1;
	 
	if(numero_2>max) max=numero_2;
	if(numero_2<min) min=numero_2;
	
	if(numero_3>max) max=numero_3;
	if(numero_3<min) min=numero_3;
	
	printf("el numero mayor es: %d \n", max);
	printf("el numero menor es: %d \n", min);
	

return 0;
}
