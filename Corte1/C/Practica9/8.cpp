#include <stdio.h>
int main() {
int anio;
 	printf("Ingrese el año;\n");
 	scanf("%d", &anio);
 	if (anio%4==0){
 		printf("el año es bisiesto \n");
	 }
	 else{
	 	printf("el año no es bisiesto");
	 }
	 
return 0;
}
