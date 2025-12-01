#include <stdio.h>

int main() {
    int n, i, j;
    float media;
    char respuesta;

    do {
        int suma = 0;
        printf("Digite el tamaño de la matriz: ");
        scanf("%d", &n);

        int m1[n][n];
        int max[n];


        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("Digite el valor de la matriz : ");
                scanf("%d", &m1[i][j]);
            }
        }

        printf("\nLos valores de la matriz son:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", m1[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < n; i++) {
            int maxfila = m1[i][0];
            for (j = 1; j < n; j++) {
                if (m1[i][j] > maxfila)
                    maxfila = m1[i][j];
            }
            max[i] = maxfila;
            suma += maxfila; 
        }

        media = (float)suma / n;

        printf("\nmaximos de cada fila: ");
        for (i = 0; i < n; i++) {
            printf("%d ", max[i]);
        }

        printf("\nMedia de los maximos: %.2f\n", media);


        printf("\ndesea volver a ejecutar el programa (s/n): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's' || respuesta == 'S');
}
