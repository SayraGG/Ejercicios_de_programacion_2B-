#include<stdio.h>
#include<math.h>
#define pi 3.141519
int main()
{
	float radio,area;
	printf("ingresa el radio");
	scanf("%f",&radio);
	area=pow(radio,2)*pi;
	printf ("el area del circulo es  =  %f",area);
	
}
