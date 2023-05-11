#include<stdio.h>
#define valorpi 3.141516;
int main ()
{
float angrad, angsexag,auxiliar, auxiliar2;
int grados, minutos, segundos;
printf("ingrese el angulo en radianes:");
scanf("%f",&angrad);
angsexag = (angrad * 180)/valorpi;
grados=angsexag;
auxiliar =(angsexag - grados)*60; 
 
minutos =auxiliar;
auxiliar2 = (auxiliar-minutos)*60;
 segundos = auxiliar2;

printf("El angulo en grados sexagesimales es: %i",grados);

