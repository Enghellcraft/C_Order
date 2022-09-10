#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int busqsec (int vec[], int dim, int key);

int main (void){

int i=0, vec[]={1, 4, 5, 12, 25, 27, 31, 42, 56, 73, 76, 78, 80, 99}, dim, key;
dim = sizeof(vec)/sizeof(*(vec));

printf ("ingrese el numero a encontrar: \n");
scanf ("%d", &key);
fflush (stdin);

i = busqsec (vec, dim, key);

if (i==1){
    printf ("se encontro en el arreglo");
}else { printf ("nose encontro en el arreglo");}
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
