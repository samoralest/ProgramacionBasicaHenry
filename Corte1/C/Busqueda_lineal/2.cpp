#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;   
        }
    }
    return -1;   
}

int linearSearchAll(int arr[], int n, int key, int indices[]) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count] = i;
            count++;
        }
    }
    return count;  
}

int main(void) {

    int arr[] = {4, 9, 2, 7, 5, 7, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;

    printf("Arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &key);

    int pos = linearSearch(arr, n, key);

    if (pos == -1) {
        printf("El numero %d NO se encuentra en el arreglo.\n", key);
    } else {
        printf("El numero %d se encuentra (al menos) en la posicion %d (indice 0-based).\n",
               key, pos);
    }

    int indices[100];
    int count = linearSearchAll(arr, n, key, indices);

    if (count == 0) {
        printf("No se encontraron ocurrencias de %d.\n", key);
    } else {
        printf("El numero %d aparece %d veces, en las posiciones: ", key, count);
        for (int i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
    }

    return 0;
}
