#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int x, y, s, r, m;
float d;

main()
{
	printf("Ingrese el primer numero: ");
	scanf("%d", &x);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d", &y);
	
	s = suma(x,y);
	r = resta(x,y);
	m = multiplicacion(x,y);
	d = division(x,y);
	
	if(d == 5)
	{
		printf("\nSuma: %d",s);
		printf("\nResta: %d",r);
		printf("\nMultiplicacion: %d",m);
		printf("\nNo se pudo calcular la division");
		
		
	}
	else
	{
		printf("\nSuma: %d",s);
		printf("\nResta: %d",r);
		printf("\nMultiplicacion: %d",m);
		printf("\nDivision: %.2f",d);
	}	
	
	printf("\n");
	system("PAUSE");
		
}
