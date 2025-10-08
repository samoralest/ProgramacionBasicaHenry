#include <stdio.h>
#include <string.h>

int main() {
    char contrasenaCorrecta[] = "santi17"; 
    char intento[50];
    int i, exito = 0;

    printf("Tienes 3 intentos para ingresar la contraseña.\n");

    for (i = 1; i <= 3; i++) {
        printf("Intento %d: ", i);
        scanf("%s", intento);

        if (strcmp(intento, contrasenaCorrecta) == 0) {
            printf("Contraseña Correcta\n");
            exito = 1;  
            break;
              
        } else {
            printf("contraseña equivocada\n");
        }
    }

    if (!exito) {
        printf("Se agotaron los intentos.\n");
    }

    return 0;
}



