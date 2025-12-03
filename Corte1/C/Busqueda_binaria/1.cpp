#include <stdio.h>

int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;
            high = mid - 1;  
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;
            low = mid + 1;  
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main(void) {

    int arr[] = {3, 5, 7, 9, 11, 11, 11, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;

    printf("Arreglo (ordenado): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &key);

    int first = firstOccurrence(arr, n, key);
    int last  = lastOccurrence(arr, n, key);

    if (first == -1) {
        printf("El numero %d NO se encuentra en el arreglo.\n", key);
    } else {
        int count = last - first + 1;

        printf("El numero %d aparece %d veces.\n", key, count);
        printf("Posiciones (indices 0-based): ");

        for (int i = first; i <= last; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
