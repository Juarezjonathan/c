#include <stdio.h>
#include <math.h>

main () {
	
	float a, b, c, d;
	
	printf ("resolucion de ecuaciones de segundo grado\n");
	printf ("ax 2+bx+c=0 \n");
	printf ("\n");
	
	printf ("introduzca el termino a:\n");
	scanf  ("%f", &a);
	printf ("introduzca el termino b:\n");
	scanf  ("%f", &b);
	printf ("introduzca el termino c:\n");
	scanf  ("%f", &c);
	
	d = b*b - (4*a*c);
	
	if (d == 0){
	printf ("x1 = %.2f", -b/(2*a));
}
	else if (d > 0){
		
	printf (" x1=%.2f", -b + (sqrt (d))/ (2*a));
	printf (" x2=%.2f", -b - (sqrt (d))/ (2*a));
}
return 0;
	 
}
