#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int m1[n][n];
    int max[n]; 

    printf("\nIngrese los elementos del vector:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nlos elementos del vector son:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        int maxfila = m1[i][0]; 
        for (j = 1; j < n; j++) {
            if (m1[i][j] > maxfila) {
                maxfila = m1[i][j];
            }
        }
        max[i] = maxfila; 
    }

    printf("\nel nuevo vector es:\n");
    for (i = 0; i < n; i++) {
        printf("%d ",max[i]);
    }
    printf("\n");
}

