#include<stdio.h>
#include<conio.h>
int cubo(int x);
int n,pot;

main()
{
	printf("Introduce un valor: \n");
	scanf("%d",&n);
	pot=cubo(n);
	printf("\nEl cubo de %d es %d",n,pot);
}

	int cubo(int x)
	{
		int res;
		res=(x*x*x);
		return(res);
	}
