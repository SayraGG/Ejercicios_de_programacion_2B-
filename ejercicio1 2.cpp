#include<iostream>
using namespace std;


int main() {
	float intentos;
	float num_ingresado;
	float num_secreto;
	intentos = 5;
	num_secreto = 14;
	printf("Adivine el numero (de 1 a 20):" );
	scanf( "%f",num_ingresado);
	while (num_secreto!=num_ingresado && intentos>1) {
		if (num_secreto>num_ingresado) {
		    printf( "Muy bajo"  );
		} else {
			printf( "Muy alto"  );
		}
		intentos = intentos-1;
		printf( "Le quedan " , intentos , " intentos:" );
		scanf("%f", num_ingresado);
	}
	if (num_secreto==num_ingresado) {
		printf("Exacto! Usted adivino en " , 6-intentos , " intentos." );
	} else {
		printf("El numero era: " , num_secreto );
	}

}
