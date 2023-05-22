#include<iostream>
using namespace std;


int main() {
	float numerosecreto;
	string op;
	float respuesta;
	numerosecreto = 14;
	printf( "adivine el numero") ;
	scanf ("%f",respuesta);
	if (respuesta==numerosecreto) {
		printf("es correcto"  );
	} else {
		printf("incorrecto"  );
		printf ( "¿quieres intentarlo de nuevo?" );
		scanf("%f", &op);
	}
	if (op=="si") {
		printf( "adivine el numero"  );
		scanf ("%f",respuesta);
		if (respuesta==numerosecreto) {
			cout << "es correcto" << endl;
		} else {
			cout << "incorrecto" << endl;
			if (op=="no") {
			}
		}
	}

}
	

