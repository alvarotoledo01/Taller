#include <stdio.h>
#include <stdlib.h>
#include "prim.h"

main()
{
	int n,i;
	bool z;
	
	printf("Cuantos numeros primos desea mostrar: ");
	scanf("%d", &n);
	
	if(n == 1 || n < 1)
	{
		printf("Debe ingresar un numero mayor que 1: ");
		scanf("%d", &n);
	}
	else
	{   
	   	   esPrimo();
	   	   z=esPrimo();
	   	   listarNumerosPrimos(n,z);	
	}
}
