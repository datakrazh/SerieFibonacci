#include<stdio.h>

void fibonacci(int N,int PrimerSumando,int SegundoSumando) {
    if(N>0)
	{
		printf("%d ",PrimerSumando);
		fibonacci(N-1,SegundoSumando,PrimerSumando+SegundoSumando);
    }
}

int main()
	{
		int N;
		printf("Ingresa el numero de elementos de la serie fibonacci: ");
		scanf("%d",&N);
		
		fibonacci(N,0,1);
		printf("\n");
		
		return 0;
	}

