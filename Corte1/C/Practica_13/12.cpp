#include <stdio.h>
int main(){
int numero, multi = 0, i;
	printf("Digite un numero: \n");
	scanf("%d", &numero);

	for (i = 1; i <= 10; i++) {
		multi=numero*i;
		printf("La tabla de multiplicar es: %d \n", multi);
	}

return 0;
}
