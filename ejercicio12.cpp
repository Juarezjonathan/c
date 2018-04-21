#include <stdio.h>
main (){
	 
	 float euros,dolares;
	 printf ("introduzca los dolares\n");
	 scanf  ("%f", &dolares);

	euros = dolares * 1.33250;
	 
	printf ("el total de euros es %.2f",euros);
	 
	return 0;
}
