#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void ordenaelem(int vec[], int dim);
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
//c)INSERCION
ordenaelem(vec,dim);
printf ("\nResultado después de ordenar: \n");
emiteelem(vec,dim);
}

void ordenaelem(int vec[], int dim){
int i,j, k, cont;
float aux;
	/* Ordenar y mostrar resultados intermedios*/
	for (cont = 1; cont<dim; cont++){
		/* Colocar v[cont] */
		aux = vec[cont];
		k = cont-1; /* posicion del elemento a comparar */
		while ((vec[k] > aux) && (k>0)){
	 		/* Desplazar elementos */
		vec[k+1] = vec[k];
		k--;
		}
	if (vec[k] <= aux){
        /* posicion intermedia */
        vec[k+1] = aux;
		}
		else{ /* colocar el primero */
		vec[1] = vec[0];
		vec[0] = aux;
		}
}
/* Fin ordenamiento*/
}

void emiteelem(float vec[], int dim){
int i;
for (i = 0; i < dim; i++)
{printf ("%.1f", vec[i]);
printf("\n");
}
}
