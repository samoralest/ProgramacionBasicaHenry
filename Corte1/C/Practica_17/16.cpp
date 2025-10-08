#include <stdio.h>

int main() {
    int N, M;
    int contador = 0;

    printf("Ingrese el primer numero (N): ");
    scanf("%d", &N);

    printf("Ingrese el segundo numero (M): ");
    scanf("%d", &M);

    if (N <= M) {
        printf("Error: El primer numero debe ser mayor que el segundo.\n");
        return 0;
    }

    printf("Buscando tres numeros pares entre %d y %d \n", N, M);

    for (int i = M + 1; i < N; i++) {   
        if (i % 2 == 0) {             
            printf("%d ", i);          
            contador++;
            if (contador == 3) break;  
        }
    }

    if (contador < 3) {
        printf("No hay tres números pares entre los valores ingresados.\n");
    }

    return 0;
}
