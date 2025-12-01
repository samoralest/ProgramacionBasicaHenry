#include <stdio.h>
int i,n;
char respuesta;
int main(){
do{
	printf("digite el tamaño del vector:");
	scanf("%d", &n);
	int m1[n];
	for(i=0; i<n; i++){
		do{
			printf("digite los valores del vector:");
				scanf("%d", &m1[i]);
			if(m1[i] % 2 !=0){
				printf("no son valores pares\n");
			}
		}while(m1[i] % 2 !=0);
	}
	printf("los valores del vector son:\n");
	for(i=0; i<n; i++){
		printf("%d ", m1[i]);
	}
	for(i=0; i<n; i++){
		printf("\nvalor: %d \tposicion: %d\n", m1[i], i);
	}
	printf("\ndesea ejecutar nuevamente el programa (s/n):");
	scanf(" %c",&respuesta);
	}while(respuesta == 's' || respuesta =='S');
}
		
