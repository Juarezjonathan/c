#include <stdio.h>
main (){
	   
	 float base,altura,area,perimetro;
	 printf ("escriba la base del rectangulo \n");
	 scanf  ("%f", &base);
	 printf ("escriba la altura del rectangulo \n");
	 scanf  ("%f", &altura);
	 area = base * altura;
	 perimetro = base + altura;
	 printf ("el area es %f \nel perimetro es %f\n",area,perimetro);
	return 0;
}
