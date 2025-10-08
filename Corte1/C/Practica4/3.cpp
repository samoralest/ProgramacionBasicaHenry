#include <stdio.h>
int main() {
char nombre [50];
float horas, precio_hora, sueldo_bruto, retencion, sueldo_neto;

	printf("nombre del trabajador:\n");
	scanf("%s", nombre);
	printf("numero de horas trabajadas: \n");
	scanf("%f", &horas);
	printf("precio de la hora: \n");
	scanf("%f", &precio_hora);
	
	sueldo_bruto= horas*precio_hora;
	retencion= sueldo_bruto*0.05;
	sueldo_neto = sueldo_bruto-retencion;
	
	printf("nombre: %s \n", nombre);
	printf("sueldo bruto: %2f \n", 	sueldo_bruto );
	printf("retencion (5%%): %2f \n", retencion );
	printf("sueldo neto: %2f \n", sueldo_neto );
	
	return 0;
}
