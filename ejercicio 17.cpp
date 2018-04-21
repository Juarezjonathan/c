#include <stdio.h>

main (){
	 
	 float r1, r2, rtotal;
	 
	 printf ("escriba los valores de resistencia en ohms\n");
	 scanf ("%f%f",&r1 ,&r2);
	 
	 rtotal =  (r1 * r2) / (r1 + r2);
	 
	 printf ("la resistencia total en paralelo es %.2f",rtotal);
	 return 0;
	 
}
