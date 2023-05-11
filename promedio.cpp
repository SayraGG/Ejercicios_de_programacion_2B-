#include<stdio.h>
#include<math.h>
int main()
{
	float calificacion1,calificacion2,calificacion3,numpar,promedio;
	printf("ingresa la calificacion de primer parcial");
	scanf("%f",&calificacion1);
	printf("ingresa la calificacion de segundo parcial");
	scanf("%f",&calificacion2);
	printf("ingresa la calificacion de tercer parcial");
	scanf("%f",calificacion3);
	printf("numero de parciales ");
	scanf("%f",numpar);
	promedio=(calificacion1+calificacion2+calificacion3)/numpar;
	printf ("el promedio es =  %f",promedio);
	
}
