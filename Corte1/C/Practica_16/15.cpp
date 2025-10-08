#include <stdio.h>

int main() {
    int numero, i, es_primo = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                es_primo = 0;
                break;
            }
    }
    

    if(es_primo) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}
