#include <stdio.h>

main (){
	
	float a,b,c,d,media;
	
	printf ("calcular la media de 4 numeros\n");
	printf ("escriba el valor 1\n");
	scanf ("%f", &a);
	printf ("escriba el valor 2\n");
	scanf ("%f", &b);
	printf ("escriba el valor 3\n");
	scanf ("%f", &c);
	printf ("escriba el valor 4\n");
	scanf ("%f", &d);
	
	media = (a + b + c + d)/4;
	
	printf ("la media es: %.2f", media);
	
	return 0;	
	
}
