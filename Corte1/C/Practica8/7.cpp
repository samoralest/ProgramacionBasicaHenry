#include <stdio.h>
int main() {
float nota;
	printf("Ingrese su nota (0-10):\n");
	scanf("%f", &nota);
	if(nota<5){
		printf("suspende \n");
	}
	else if(nota<7){
		printf("aprobado \n");
	}
	else if(nota<9){
		printf("notable\n");
	}
	else if(nota<10){
		printf("sobresaliente\n");
	}
	else{
		printf("matricula de honor\n");
	}
return 0;
}

