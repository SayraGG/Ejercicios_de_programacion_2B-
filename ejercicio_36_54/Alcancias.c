/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	int contador;
	char contrasena[MAX_STRLEN];
	float deposito;
	int respuesta;
	float retiro;
	float saldo;
	int veces;
	saldo = 1000;
	contador = 1;
	veces = 0;
	while (veces<=3) {
		printf("Escribe la contraseña\n");
		scanf("%s",contrasena);
		if (strcmp(contrasena,"abc")==0) {
			veces = 3;
			respuesta = 0;
			while (respuesta!=4) {
				printf("1: = Consultar saldo\n");
				printf("2: = Ingresar saldo\n");
				printf("3: = Retirar saldo\n");
				printf("4: = Salir\n");
				scanf("%i",&respuesta);
				switch (respuesta) {
				case 1:
					printf("Tu saldo actual es: $%f\n",saldo);
					break;
				case 2:
					printf("Ingresa la cantidad a depositar\n");
					scanf("%f",&deposito);
					saldo = saldo+deposito;
					printf("Tu saldo actual es es: $%f\n",saldo);
					break;
				case 3:
					printf("Ingresa la cantidad a retirar\n");
					scanf("%f",&retiro);
					if (retiro>saldo) {
						printf("No cuenta con saldo suficiente\n");
						printf("Tu saldo actual es: $%f\n",saldo);
					} else {
						saldo = saldo-retiro;
						printf("Tu saldo actual es: $%f\n",saldo);
					}
					break;
				}
				if (respuesta!=4) {
					printf("¿Que opcion deseas realizar?; \n");
				} else {
					printf("4: = Salir\n");
				}
			}
		} else {
			veces = veces+1;
			if (veces==4) {
				printf("Has fallado los 3 intentos\n");
			} else {
				printf("La contraseña es incorrecta\n");
			}
		}
	}
	return 0;
}

