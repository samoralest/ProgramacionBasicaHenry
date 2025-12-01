#include <stdio.h>
int n, i, j;
char respuesta1;
int main() {
do{
    printf("Ingrese la dimension N de la matriz: ");
    scanf("%d", &n);

    int matriz[n][n];
    
     printf("Ingrese los elementos de la matriz: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
       }
   }
int resultado[n][n];
   for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) 
                resultado[i][j] = matriz[i][j] + matriz[j][i];
            else
                resultado[i][j] = 0;
        }
    }
 	printf("los elementos de la matriz original son:\n");
    	for (i = 0; i < n; i++) {
        	for (j = 0; j < n; j++) {
            printf("%5d  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("los elementos de la matriz resulatnte son:\n");
    	for (i = 0; i < n; i++) {
        	for (j = 0; j < n; j++) {
            printf("%5d  ", resultado[i][j]);
        }
        printf("\n");
    }
    printf("desea volver a ejecutar el programa (s/n):");
    scanf(" %c",&respuesta1);
  }while(respuesta1 =='s' || respuesta1 =='S');
}

