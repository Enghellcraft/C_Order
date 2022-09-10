#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void ordenaelem(float vec[], int dim);
void emiteelem(float vec[], int dim);

int main (void){

int i=0, dim=6;
float vec[dim];

printf ("ingrese 10 numeros: \n");
while (i<dim){
scanf ("%f", &vec[i]);
fflush (stdin);
printf ("\n%d es i\n", i);
i++;
}
//b) BURBUJEO MEJORADO
ordenaelem(vec,dim);
emiteelem(vec,dim);
}

void ordenaelem(float vec[], int dim){
int i,j, cambio;
float aux;
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

void emiteelem(float vec[], int dim){
int i;
for (i = 0; i < dim; i++)
{printf ("%.1f", vec[i]);
printf("\n");
}
}
