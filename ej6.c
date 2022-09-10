#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int busqsec (int vec[], int dim, int key);
void modal (int vec[], int dim);

int main (void){

int i=0,  dim=100,vec[dim], key;

printf ("Ingrese el tamaño del vector: \n");
scanf ("%d", &dim);
fflush (stdin);

for (i=0; i<dim; i++){
printf ("Ingrese el valor %d; \n", i+1);
scanf ("%d", &vec[i]);
fflush (stdin);
}

printf ("ingrese el numero a encontrar: \n");
scanf ("%d", &key);
fflush (stdin);

i = busqsec (vec, dim, key);

if (i==1){
    printf ("se encontro en el arreglo\n");
}else { printf ("nose encontro en el arreglo\n");}

modal (vec, dim);
}

int busqsec (int vec[], int dim, int key){

int i=0, k=0;

while (i<dim){
    if (vec[i]==key){
        k=1;
    }
    i++;
}
return (k);
}

void modal (int vec[], int dim){
int i=0, j=0, k[dim], c, num, mayor;
for (i=0; i<dim; i++){
    c=0;
    for (j=0; j<dim; j++){
            if (vec[i]==vec[j]){
            c++;
            }
    k[i]= c;
}
mayor = 1;
for (i=0; i<dim;i++){
    if (vec[i]>mayor){
        mayor = vec[i];
    }
}
if (mayor>1){
    printf ("La moda es el numero: %d", mayor);
} else {printf("no hay moda");}
}
}
