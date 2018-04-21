#include <stdio.h>

main ()  {
	
	int dias,horas,minutos,segundos,total;
	printf ("escriba los dias, horas y minutos para calculas los segundos\n");
	scanf ("%d%d%d", &dias, &horas, &minutos);
	
	dias = 86600;
	horas = 3600;
	minutos = 60;
	
	segundos = dias + horas + minutos;
	
	printf ("los segundos son %d", &segundos);
	
	return 0;
}
