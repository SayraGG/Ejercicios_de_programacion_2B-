#include <stdio.h>
#include <math.h>
 
int main () 
 
{
 
float hora,hour;
 
printf ("escriba la hora en formato de 24 horas");
scanf ("%f",&hora);
 
if (hora<12.00)
     {
     printf ("la hora es: %.2f AM",hora);  
     }
else
     {
     hour=hora-12;
     printf ("la hora es: %.2f PM",hour);
     }
 
return (0);
 
}
