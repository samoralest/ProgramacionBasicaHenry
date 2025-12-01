#include <stdio.h>
char respuesta;
float sumaTotal = 0;
int n, m, i, j;
int main() {
do{
	printf("Ingrese el tamaño de la fila:");
    scanf("%d", &n);
    printf("Ingrese el tamaño de la columna: ");
    scanf("%d", &m);
float m1[n][m];
float sumafila[n];
float sumacolumna[m];
    for (i = 0; i < n; i++)
        sumafila[i] = 0;
    for (j = 0; j < m; j++)
        sumacolumna[j] = 0;

    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%f", &m1[i][j]);
        }
    }printf("\nlos elementos de la matriz son:\n");
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
          printf("%f ", m1[i][j]);
        }
         printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sumafila[i] += m1[i][j];
            sumacolumna[j] += m1[i][j];
            sumaTotal += m1[i][j];
        }
    }
    printf("\nmatriz con sumas:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%.2f ", m1[i][j]);
        }
        printf("%.2f\n", sumafila[i]); 
    }

    for (j = 0; j < m; j++) {
        printf("%.2f ", sumacolumna[j]);
    } 
    printf("\ndesea volver a ejecutar el programa (s/n): ");
        scanf(" %c", &respuesta);
}while (respuesta == 's' || respuesta == 'S');
}
