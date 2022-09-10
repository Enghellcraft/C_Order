#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void ordenaelem(int vec[], int dim);
void emiteelem(int vec[], int dim);
void mediana (int vec[], int dim);

int main (void){

int i=0, dim=6;
int vec[dim];

printf ("ingrese 6 numeros: \n");
while (i<dim){
scanf ("%d", &vec[i]);
fflush (stdin);
printf ("\n%d es i\n", i);
i++;
}
//b) BURBUJEO MEJORADO
ordenaelem(vec,dim);
emiteelem(vec,dim);
}

void ordenaelem(int vec[], int dim){
int i,j, cambio;
int aux;
/* Ordenamiento*/
for (i = 0; i < dim-1; i++)
    {cambio = 0;
	   for (j = 0; j < dim-(i+1); j++)
       {if (vec[j] > vec[j+1]){
            aux = vec[j];
			vec[j] = vec[j+1];
			vec[j+1] = aux;
			cambio = 1;
		}
    }
    }
}

void emiteelem(int vec[], int dim){
int i;
printf ("El arreglo ordenado es: \n");
for (i = 0; i < dim; i++)
{printf ("%d", vec[i]);
printf("\n");
}
mediana ( vec,  dim);
}

void mediana (int vec[], int dim){
int median;
median = dim/2;
printf ("la posicion de la mediana esta ocupada por el numero: %d\n", vec[median]);
}
