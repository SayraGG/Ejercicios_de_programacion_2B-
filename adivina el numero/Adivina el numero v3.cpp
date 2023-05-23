#include<iostream>
using namespace std;



int main() {
	float numerosecreto;
	string op;
	float respuesta;
	numerosecreto = 13;
	cout << "adivine el numero" << endl;
	cin >> respuesta;
	if (respuesta==numerosecreto) {
		cout << "es correcto" << endl;
	} else {
		cout << "incorrecto" << endl;
		cout << "¿quieres intentarlo de nuevo?" << endl;
		cin >> op;
	}
	if (op=="si") {
		cout << "adivine el numero" << endl;
		cin >> respuesta;
		if (respuesta==numerosecreto) {
			cout << "es correcto" << endl;
		} else {
			cout << "incorrecto" << endl;
			if (op=="no") {
			}
		}
	}
	return 0;
}
