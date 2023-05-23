#include<iostream>
using namespace std;	
int main()
 {
	int contador;
	string n;
	int respuesta;
	contador = 1;
	while (contador<=3) {
		cout << "ingrese un numero: " << endl;
		cin >> n;
		if (n=="13") {
			contador = 4;
			respuesta = 0;
			cout << "Muy bien,encontraste el numero correcto" << endl;
		} else {
			contador = contador+1;
			if (contador==4) {
				cout << "te equivocaste,has fallado los tres intentos" << endl;
			} else {
				cout << "No adivinaste el numero" << endl;
				cout << "El numero secreto es mayor a 10 y menor a 15" << endl;
			}
		}
	}
	return 0;
}
