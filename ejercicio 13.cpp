#include <stdio.h>
main (){
	   
	 float radio, perimetro, area, volumen;
	 printf ("escriba el radio \n");
	 scanf  ("%f", &radio);
	 perimetro = ((2 * 3.1416)*radio);
	 area = 3.1416 * (radio*radio);
	 volumen = ((4 * 3.1416)*(radio*3)/3);
	 
	 printf (" el perimetro es %.3f\n el area es %.3f\n el volumen es %.3f",perimetro,area,volumen);
	 	 
	return 0;
}
