#include <stdio.h>

int main() {
    int numero, contador = 0;
    float suma = 0, promedio;

    printf("Ingrese numeros positivos, termine con un valor negativo:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {  
            break;
        }

        suma += numero;
        contador++;
    }

    if (contador > 0) {
        promedio = suma / contador;
        printf("El promedio es: %.2f\n", promedio);
    } else {
        printf("No ingreso numeros positivos.\n");
    }

    return 0;
}
