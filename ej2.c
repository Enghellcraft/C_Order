#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int buscaorden (int vec[],int tam);

int main (void){

int vec[100], tam, i;

printf ("Ingrese el tamaño del vector: \n");
scanf ("%d", &tam);
fflush (stdin);

for (i=0; i<tam; i++){
printf ("Ingrese el valor %d; \n", i+1);
scanf ("%d", &vec[i]);
fflush (stdin);
}

i = buscaorden (vec, tam);
if (i==0){
    printf ("Esta Ordenado\n");
    }else{
    printf ("No esta Ordenado");
    }

}

int buscaorden (int vec[],int tam){

int i,j, cambio;
float aux;

/* Ordenamiento*/
for (i = 0; i < tam-1; i++)
    {cambio = 0;
	   for (j = 0; j < tam-(i+1); j++)
       {if (vec[j] > vec[j+1]){
            aux = vec[j];
			vec[j] = vec[j+1];
			vec[j+1] = aux;
			cambio = 1;
		}
    }
    }
return (cambio);
}


