#include <stdio.h>
int n, m;
int i, j;
float media;
char respuesta;
int main(){
int suma=0;
do{
	printf("digite el tamño de la fila:");
	scanf("%d",&n);
	printf("digite el tamño de la columna:");
	scanf("%d",&m);
int m1[n][m];
int max, min;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("digite los valores de la matriz:");
			scanf("%d", &m1[i][j]);

			}
	}printf("los valores de la matriz son:\n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", m1[i][j] );
		}printf("\n");
	}
	max = min = m1[0][0];
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (m1[i][j] > max)
                max = m1[i][j];
            if (m1[i][j] < min)
                min = m1[i][j];
            suma= suma + m1[i][j];          
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
        media= suma/(n*m);
		}
    }
    	printf("el valor maximo de la matriz es: %d", max);
    		printf("\nel valor minimo de la matriz es: %d", min);
    			printf("\nla media es: %f", media);
    			
	 printf("\ndesea volver a ejecutar el programa (s/n):");
	 scanf(" %c", &respuesta);
}	while(respuesta=='s'|| respuesta=='S');
}
