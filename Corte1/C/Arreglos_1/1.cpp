#include <stdio.h>
int i,n;
char respuesta;
int main(){
int suma=0;
float promedio=0;
do{
	printf("digite el tamaño del vector:");
	scanf("%d", &n);
	int m1[n];
	for(i=0; i<n; i++){
		printf("digite los valores del vector:");
			scanf("%d", &m1[i]);
	}
	printf("los valores del vector son:\n");
	for(i=0; i<n; i++){
		printf("%d ", m1[i]);			
   }
   for(i=0; i<n; i++){
   		suma=suma+m1[i];
   }
   printf("\nla suma es: %d", suma );
   for(i=0; i<n; i++){
   		promedio=suma/n;
   }
   printf("\nel promedio es: %f", promedio);
   printf("\ndesea ejecutar nuevamente el programa: (s/n)");
   scanf(" %c",&respuesta);
	}while(respuesta == 's'|| respuesta=='S');
}
	
