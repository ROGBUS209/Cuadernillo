#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    
    int x;
   int n;
   int c;
   printf("escribe un número:");
   scanf("%d", &x);
   float arreglo[x];
   for(n;n<x;n++){
    printf("\n escribe un número :", n+1);
   scanf("%f", &arreglo[n]);
   }
   float aux=0;
   for (n;n<x-1;n++){
   for(c;c<x-1;c++)
   {
   if(arreglo[c] > arreglo[c+1])
   {
   aux = arreglo[c];
   arreglo[c] = arreglo[c+1];
   arreglo[c+1]=aux;
   }
   }
   }
   printf("\n el orden es :\n");
   for(int n=0; n<x; n++){
   printf("%f, ", arreglo[n]);    
   }
return (EXIT_SUCCESS);
}

