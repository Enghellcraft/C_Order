#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void ordenaelem(float vec[], int dim);
void coloca_el_ultimo (float vec[], int dim);
int posicion_maximo (float vec[], int dim);
void intercambia (float *px, float *py);

int main (void){

int i=0, dim=5;
float vec[dim];

printf ("ingrese 10 numeros: \n");
while (i<dim){
scanf ("%f", &vec[i]);
fflush (stdin);
printf ("\n%d es i\n", i);
i++;
}
//a) SELECCION
ordenaelem(vec,dim);
printf ("\nResultado después de ordenar: \n");
emiteelem(vec,dim);

}

void ordenaelem(float vec[], int dim){
int cont;
/* Ordenamiento*/
for (cont = dim; cont > 1; cont--){
/* tamaño desde el inicial hasta 2 */
coloca_el_ultimo (vec, cont);
}
}

void coloca_el_ultimo (float vec[], int dim){
/* intercambia los elementos máximo de x y último de x
 colocando en último lugar el máximo elemento */
/* n es el tamaño efectivo de x */
int p;
p = posicion_maximo (vec, dim);
if (vec[p] !=  vec[dim-1]){
intercambia (&vec[dim-1], &vec[p]);}
}

int posicion_maximo (float vec[], int dim){
/* devuelve la posición del elemento mayor del vector x */
/* entrada: vector x, de tamaño efectivo n */
/* salida : posición entre 1 y n-1 */
float mprov;
int i, pprov;
mprov = vec[0];
pprov = 0;
for (i = 1; i < dim; i++)
    if (vec[i]> mprov){
	  mprov = vec[i];
      pprov = i;
    }
return pprov;
}

void intercambia (float *px, float *py) {
float n;
n = *py;
*py = *px;
*px = n;
}

void emiteelem(float vec[], int dim){
int i, casos=0;
for (i = 0; i < dim; i++)
{printf ("%.1f", vec[i]);
printf("\n");
if (vec[dim-1]==vec[i]){
    casos++;
}
}
if (casos>1){
    printf ("Se encontraron %d casos de maximo repetido", casos);
}else{ printf ("no se encontraron casos repetidos");}
}

