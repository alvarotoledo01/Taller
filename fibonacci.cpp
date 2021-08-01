#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int x);

main()
{
	int x, y;
	
	printf("Numero de entrada: ");
	scanf("%d",&x);
	
	y = Fibonacci(x);
	
	if(y == -1)
	{
		printf("El numero ingresado no es valido");
	}
	else
	{
		printf("Numero de Salida: %d",y);
	}
	printf("\n");
	system("PAUSE");
	
}

int Fibonacci(int x)
{
	
		if(x == 0)
		{
			return 0;
		}
		if(x == 1)
		{
			return 1;
		}
		if(x > 1)
		{
			return Fibonacci(x-1) + Fibonacci(x-2); 
		}	
		else
		{
			if(x < 0)
			{
				return -1;
			}	 
		}
}
