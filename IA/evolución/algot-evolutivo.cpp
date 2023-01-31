#include <stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

 
 void aleatorios100();
 void aleato50();
 void combinar();
 void combinacion();
 void total();


// variables goblales 
	int i;
	int arreglo[100];//array
	int par[50];//pares
	int suma,contador1,contador2,contador3,contador4,H,H1,H2,H3,porcentaje;

main ()
{
		
//impresión en la consola  
	
	printf(" Los numeros aleatorios son:\n");
	aleatorios100();
	printf("\n");
	system("pause");
	printf("\n");
	printf("\t\t\tPADRES\n");
	printf("\n");
	aleato50();
	printf("\n");
	system("pause");
	printf("\n");
	printf("\t\t\tHIJOS\n");
	combinar();
	printf("\n");
	system("pause");
	printf("\n");
	printf("\t\t\tMUTACIÓN\n");
	printf("\n");
	combinacion();
	printf("\n");
	system("pause");
	printf("\n");
	printf("\t\t\tTOTAL DE HIJAS\n");
	printf("\n");
	total();
	printf("\n");
	system("pause");
	
} 

void aleatorios100()
{
	srand(time(NULL));
	for(i=0;i<=100;i++)
	{
		arreglo[i] = 1+rand()% (3-1);
		if(arreglo[i] == 2)
		{
			printf("\tRojo\n",&arreglo[i]);
		}
		else 
		{
			printf("\tBlanco\n", &arreglo[i]);
		}
	}
}

void aleato50()
{
	
	srand(time(NULL));
	
	for(i=0;i<50;i++)
	{
		par[i]= 1+rand()% (5-1);
		if(par[i]== 1)
		{
			printf("\tFlor Roja\n");
			printf("\tFlor Blanca\n");
			printf("\n");
		}
		if(par[i]== 2)
		{
			printf("\tFlor Roja\n");
			printf("\tFlor Roja\n");
			printf("\n");
		}
		if(par[i]== 3)
		{
			printf("\tFlor Blanca\n");
			printf("\tFlor Blanca\n");
			printf("\n");
		}
		if(par[i]== 4)
		{
			printf("\tFlor Blanca\n");
			printf("\tFlor Roja\n");
			printf("\n");
		}
	 
	}
}

void combinar()
{
	for(i=0;i<50;i++)
	{
		if(par[i]== 1)
		{
			printf("\tFlor Roja\n");
			printf("\tFlor Blanca\n");
			printf("\tFlor Hija Blanca\n");
			printf("\n");
		}
		if(par[i]== 2)
		{
			printf("\tFlor Roja\n");
			printf("\tFlor Roja\n");
			printf("\tFlor Hija Roja\n");
			printf("\n");
		}
		if(par[i]== 3)
		{
			printf("\tFlor Blanca\n");
			printf("\tFlor Blanca\n");
			printf("\tFlor Hija Blanca\n");
			printf("\n");
		}
		if(par[i]== 4)
		{
			printf("\tFlor Blanca\n");
			printf("\tFlor Roja\n");
			printf("\tFlor Hija Blanca\n");
			printf("\n");
		}
	}
}
void combinacion()
{
	for(i=0;i<50;i++)
	{
		if(par[i]== 1)
		{
			printf("\tFlor Roja\n");
			printf("\tFlor Blanca\n");
			printf("\tFlor Hija Blanca\n");
			printf("\n");
			if(par[i]== 1)
			{
				contador2++;
				H1=contador2+1;
			}
			
		}
		if(par[i]== 2)
		{
			printf("\tFlor Roja\n");
			printf("\tFlor Roja\n");
			printf("\tFlor Hija Roja\n");
			printf("\n");
			
			if(par[i]== 2)
			{
				contador1++;
				H=contador1+1;
				porcentaje=H*0.20;
			}
		
			
		}
		if(par[i]== 3)
		{
			printf("\tFlor Blanca\n");
			printf("\tFlor Blanca\n");
			printf("\tFlor Hija Blanca\n");
			printf("\n");
			if(par[i]== 3)
			{
				contador3++;
				H3=contador3+1;
			}
			
			
		}
		
		if(par[i]== 4)
		{
			printf("\tFlor Blanca\n");
			printf("\tFlor Roja\n");
			printf("\tFlor Hija Blanca\n");
			printf("\n");
			if(par[i]== 4)
			{
				contador4++;
				H3=contador4+1;
			}
		}
			
	}

}

void total()
{
	printf ("--Total de flores hijas rojas: %d --",H-1);
	suma=((H1-1)+(H2-1)+(H3-1));
	printf ("\n--Total de flores hijas blancas: %d --",suma);
	printf ("\n--Total de flores hijas amarillas: %d --",porcentaje);
		
}
