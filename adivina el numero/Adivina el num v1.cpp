#include<iostream>
using namespace std;
int main()
 {
	float num;
	cout << "Ingresa un numero" << endl;
	cin >> num;
	if (num<13 || num>13) {
		cout << "Incorrecto" << endl;
	}
	if (num==13) {
		cout << "correcto" << endl;
	}
	return 0;
}
