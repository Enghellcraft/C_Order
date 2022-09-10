#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int busquedaBinaria( int vec[], int key, int bajo, int alto, int d );

int main (void){

int i=0, vec[]={1, 4, 5, 12, 25, 27, 31, 42, 56, 73, 76, 78, 80, 99}, dim, key, resultado;
dim = sizeof(vec)/sizeof(*(vec));

printf ("ingrese el numero a encontrar: \n");
scanf ("%d", &key);
fflush (stdin);

resultado = busquedaBinaria( vec, key, 0, dim - 1, dim );

if ( resultado != -1 ) {
    printf( "\n%d se encuentra en la posicion %d del arreglo\n", key, resultado );
   }
else {
    printf( "\n%d no se encuentra\n", key );
}
}

int busquedaBinaria( int vec[], int key, int bajo, int alto, int d ){
   int central;
   while ( bajo <= alto ) {
     central = ( bajo + alto ) / 2;
     if ( key == vec[ central ] ) {
         return central;
      }
      else if ( key < vec[ central ] ) {
         alto = central - 1;
      }
      else {
         bajo = central + 1;
      }
   }
   return -1;
}
