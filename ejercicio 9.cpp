#include <stdio.h>
main (){
	 
	 char iniciales[50];  
	 float a;
	 printf ("que altura tienes?, cuales son tus iniciales? \n");
	 scanf  ("%f%s", &a, &iniciales);
	 printf ("sus inicales son %s y su altura es %.2f \n",iniciales,a);
	return 0;
} 
