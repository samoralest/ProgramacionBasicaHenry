#include <stdio.h>
int n, m;
int i, j;
int contador_pares=0;
char respuesta;
int main(){
int suma=0;
do{
	printf("digite el tamño de la fila:");
	scanf("%d",&n);
	printf("digite el tamño de la columna:");
	scanf("%d",&m);
int m1[n][m];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("digite los valores de la matriz:");
			scanf("%d", &m1[i][j]);

			}
	}printf("los valores de la matriz son:\n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", m1[i][j] );
				if(m1[i][j] % 2==0){
	 				contador_pares++;
			}
		
		}printf("\n");
	
	 }printf("los valores pares de la matriz son: %d", contador_pares);
	 
	 printf("\ndesea volver a ejecutar el programa (s/n):");
	 scanf(" %c", &respuesta);
}	while(respuesta=='s'|| respuesta=='S');
}
