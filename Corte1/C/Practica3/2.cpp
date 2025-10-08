#include <stdio.h>

int main() {
    char producto[50];
    float precio, total;
    int cantidad;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto);  // lee una sola palabra (sin espacios)

    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precio);

    printf("Ingrese la cantidad de unidades: ");
    scanf("%d", &cantidad);

    total = precio * cantidad;

    printf("FACTURA DE VENTA\n");
    printf("Producto: %s\n", producto);
    printf("Cantidad vendida: %d\n", cantidad);
    printf("Precio por unidad: %.2f\n", precio);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}
