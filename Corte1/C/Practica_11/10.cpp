#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, intento, i;

    srand(time(NULL));
    numero_secreto = rand() % 10 + 1;

    printf("Adivina el numero entre 1 y 10 (tienes 10 intentos):\n");

    for (i = 1; i <= 10; i++) {
        printf("Intento %d: ", i);
        scanf("%d", &intento);

        if (intento == numero_secreto) {
            printf("Adivinaste el numero %d en %d intentos.\n", numero_secreto, i);
            break; 
        } else if (intento < numero_secreto) {
            printf("El numero secreto es mayor.\n");
        } else {
            printf("El numero secreto es menor.\n");
        }
    }

    if (intento != numero_secreto) {
        printf("Lo siento, se acabaron los intentos. El numero era %d.\n", numero_secreto);
    }

    return 0;
}
