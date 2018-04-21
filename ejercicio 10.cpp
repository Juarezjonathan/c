#include <stdio.h>
main (){
	 
	 float a,b,total,descuento;
	 printf ("introduzca el precio\n");
	 scanf  ("%f", &a);
	 printf ("cual es el descuento\n");
	 scanf  ("%f", &b);
	 
	 descuento = (a * b)/100 ;
	 total = a - descuento;
	 
	printf ("el total es %.2f \n",total);
	 
	return 0;
}
