bool esPrimo()
{
	int z,c=0,i=2,j=1;
	while(i<100)
	{		
		if(i % j == 0)
		{
			c++;
		}		
		j++;
		i++;
	}
	if(c==2)
	{
		z=true;
	}
	return z;
}

void listarNumerosPrimos(int cantidadPrimos, bool z)
{
	int c;
	int i=2,d;
	
	if(z == true)
	{	
		d=0;	
	 	while(i>1)
		{	
			if(i % i == 0 && i % 1 == 0)
			{
				d++;		
			}
			if(d==2)
			{
				for(c=1;c<=cantidadPrimos;c++)
				{
					printf("\nPrimo numero %d: %d",c,i);
				}
			}
			i++;
		}
		
		
	}
	
	


} 
 

	 
	
	
		

	
	


