#include <stdio.h>

main () {
	
	int a=1,b;
	
	printf ("escriba hasta que numero imprimira el programa\n");
	scanf ("%d", &b);
	printf ("\n\n");
	
	while (a <= b){
     	printf ("%d\n",a);	
		a++;
	}
	
	return 0;
}
