#include <stdio.h>
#include <stdlib.h>
int main() {
	int opcion;
	int base, altura, radio, lado,lado1, lado2, lado3;
	char continuar;
	do{
		printf("selecione una figura:\n");
		printf("1.cuadrado\n");
		printf("2.triangulo\n");
		printf("3.rectangulo\n");
		printf("4.circulo\n");
		printf("opcion:\n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				printf("digite el lado del cuadrado:");
				scanf("%d",&lado);
				printf("El area es:%d \n",lado*lado);
				printf("El perimetro es:%d \n",lado+lado+lado+lado);
				break;
			case 2:
				printf("digite la base del triangulo:");
				scanf("%d",&base);
				printf("digite la altura del triangulo:");
				scanf("%d",&altura);
				printf("digite el valor del lado1 del triangulo:");
				scanf("%d",&lado1);
				printf("digite el valor del lado2 del triangulo:");
				scanf("%d",&lado2);
				printf("digite el valor del lado3 del triangulo:");
				scanf("%d",&lado3);
				printf("El area es:%d \n",(base*altura)/2);
				printf("El perimetro es:%d \n",lado1+lado2+lado3);
				break;	
			case 3:
				printf("digite la base del rectangulo:");
				scanf("%d",&base);
				printf("digite la altura del rectangulo:");
				scanf("%d",&altura);
				printf("El area es:%d \n",base*altura);
				printf("El perimetro es:%d \n",2*(altura*base));
				break;
				case 4:
				printf("digite el radio del circulo:");
				scanf("%f",&radio);
				printf("El area es:%2f \n",3.1416*radio*radio);
				printf("El perimetro es:%2f \n",2*3.1416*radio);
				break;	
				default:
				printf("opcion no valida\n");	
			} 
			printf("Desea calcular otra figura (s/n) \n:");
			scanf(" %c", &continuar);
			}while(continuar== 's' || continuar=='S');
			printf("Fin \n");
		
	return 0;
}
