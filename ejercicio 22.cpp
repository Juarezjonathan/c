#include <stdio.h>

main () {
	
	int a,b;
	
	printf ("en que numero iniciara el programa (enteros) \n");
	scanf ("%d", &a);
	printf ("en que numero finalizara el programa (enteros) \n");
	scanf ("%d", &b);
	printf ("\n\n");
	for (a ; a <= b; a++)
	printf ("%d\n",a);
	
	return 0;
}
