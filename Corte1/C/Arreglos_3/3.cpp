#include <stdio.h>

int main() {
    int n, i;
    char respuesta;

    do {
        printf("digite el tamaño de los vectores: ");
        	scanf("%d",&n);
    int m1[n], m2[n], suma[n];
        for (i = 0; i < n; i++) {
            printf("digite los valores del primer vector:");
            scanf("%d", &m1[i]);
        }
        printf("los valores del primer vector son:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", m1[i]);
        }
        for (i = 0; i < n; i++) {
            printf("\ndigite los valores del segundo vector:");
            	scanf("%d", &m2[i]);
        }
        printf("los valores del segundo vector son:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", m2[i]);
        }
        for (i = 0; i < n; i++) {
            suma[i]= m1[i] + m2[i];
                 printf("\nla suma es:%d",suma[i]);
        }
        printf("\n\n¿Desea ejecutar nuevamente el programa? (s/n): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's' || respuesta == 'S');
}
