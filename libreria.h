int suma(int x, int y)
{
	int z;
	z = x+y;
	return z;
}

int resta(int x, int y)
{
	int w;
	w = x-y;
	return w;	
}
	
int multiplicacion(int x, int y)
{
	int v;
	v = x*y;
	return v;	
}
	
float division(float x, float y)
{
	float a,b;
	
	if(y == 0)
	{
		b = 5;
		return b;
	}
	else
	{
		a = x/y;
		return a;
	}	
}



