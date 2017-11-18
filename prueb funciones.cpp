#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
	 float a, b,r;
	 int op;
main()
{
	do{
		printf("\t\t Calculadora\n");
	puts("1) Suma");
	puts("2) Resta");
	puts("3) Division");
	puts("4) Multiplicacion");
	puts("5) Salir");
	printf("Escoge una opcion: ");
	scanf("%d", &op);
	system("cls");
	
	switch(op)
	{
		
		
	case 1:
		
		 float suma();
		printf("La suma es : %f \n", suma());
		break;
	case 2:
		
		float resta();
		printf("La resta es: %f\n", resta());
		break;
	
	case 3:
		float division();
		printf("La division es : %f\n", division());
		break;
	
	case 4:
		float multiplicacion();
		printf("La multiplicacion es: %f\n", multiplicacion());
		break;
	
	case 5:
		printf("Salir");
		break;
		
	default:
		printf("Sintax Error.\n");
		break;
	}
	}while(op!=5);
	getch();
}

float suma()
{

	printf("Dame el valor de a: ");
	scanf("%f", &a);
	printf("Dame el valor de b: ");
	scanf("%f", &b);
	  r = a+b;
	return(r);
}

float resta()
{
	
	printf("Dame el valor de a: ");
	scanf("%f", &a);
	printf("Dame el valor de b: ");
	scanf("%f", &b);
	  r= a-b;
	  return(r);
}

float multiplicacion ()
{
	
	printf("Dame el valor de a: ");
	scanf("%f", &a);
	printf("Dame el valor de b: ");
	scanf("%f", &b);
	  r= a*b;
	return(r);
}

float division()
{
	
	printf("Dame el valor de a: ");
	scanf("%f", &a);
	printf("Dame el valor de b: ");
	scanf("%f", &b);
	 r= a/b;
	return(r);
}
