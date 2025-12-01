#include <stdio.h>
char respuesta;
int main() {
do{
    int n, i, j;
    int num;
    int sumPares = 0, sumImpares = 0, contPares = 0, contImpares = 0;
    int sumPosPares = 0, sumPosImpares = 0, contPosPares = 0, contPosImpares = 0;

    printf("Ingrese la dimension N de la matriz: ");
    scanf("%d", &n);

    int matriz[n][n];

    printf("Ingrese los elementos de la matriz: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);

            num = matriz[i][j];

            if (num % 2 == 0) {
                sumPares += num;
                contPares++;
            } else {
                sumImpares += num;
                contImpares++;
            }

            if (((i * n) + j) % 2 == 0) {
                sumPosPares += num;
                contPosPares++;
            } else {
                sumPosImpares += num;
                contPosImpares++;
            }
        }
    }
       printf("los elementos de la matriz son:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    if (contPares > 0)
        printf("Suma de numeros pares: %d, Media: %.2f\n", sumPares, (float)sumPares / contPares);
    else
        printf("No hay numeros pares.\n");

    if (contImpares > 0)
        printf("Suma de numeros impares: %d, Media: %.2f\n", sumImpares, (float)sumImpares / contImpares);
    else
        printf("No hay numeros impares.\n");

    if (contPosPares > 0)
        printf("Suma en posiciones pares: %d, Media: %.2f\n", sumPosPares, (float)sumPosPares / contPosPares);
    else
        printf("No hay posiciones pares.\n");

    if (contPosImpares > 0)
        printf("Suma en posiciones impares: %d, Media: %.2f\n", sumPosImpares, (float)sumPosImpares / contPosImpares);
    else
        printf("No hay posiciones impares.\n");
    printf("desea volver a ejecutar el programa (s/n):");
    scanf(" %c",&respuesta);
	}while(respuesta =='s' || respuesta =='S');
  }

