#include <stdio.h>

main () {
	
	int a=1,b;
	
	printf ("escriba hasta que numero imprimira el programa\n");
	scanf ("%d", &b);
	printf ("\n\n");
	
	do{
	printf ("%d\n",a);	
	a++;
}
		
	while (a <= b);
	
	return 0;
}

