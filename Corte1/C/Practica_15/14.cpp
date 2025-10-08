#include <stdio.h>

int main() {
    int numero;
    int positivos = 0, negativos = 0;

    printf("Ingrese números, imgrese un 0 para terminar:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {   // 
            break;
        } else if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("Cantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);

    return 0;
}
