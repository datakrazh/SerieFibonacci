#include <stdio.h>

int fibonacci(int n)
	{
		if (n<=0)
		{
	    	return 0;
	    }
		
		else if (n==1)
		{
			return 1;
	    }
		
		else
		{
			return fibonacci(n-1)+fibonacci(n-2);
	    }
	}

void SerieFibonacci(int n, int i)
	{
		if (i < n)
		{
			int fib=fibonacci(i);
			
			printf("%d ", fib);
			SerieFibonacci(n, i+1);
	    }
	}

int main(){
	
	int n;

    printf("Ingrese cuantos elementos tendra la serie fibonacci: ");
    scanf("%d", &n);

    if (n>0)
	{
		SerieFibonacci(n, 0);
    }

    return 0;
}

