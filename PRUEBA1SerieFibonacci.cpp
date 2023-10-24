#include <stdio.h>

int fibonacci(int n)
	{
	    if (n <= 0)
		{
	    	return 0;
	        
	    }
		
		else if (n == 1)
		{
	    	return 1;
	    }
		
		else
		{
	    	return fibonacci(n-1)+fibonacci(n-2);
	    }
	}

void SerieFibonacci(int n)
	{
    	for (int i=0; i<n; i++)
		{
        	printf("%d ", fibonacci(i));
    	}
    	printf("\n");
	}

int main()
	{
	    int n;
	
	    printf("Ingrese cuantos elementos tendra la serie fibonacci: ");
	    scanf("%d", &n);
	
	    if (n > 0)
		{
	    	SerieFibonacci(n);
	    }
	    
		return 0;
	}

