#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int n;
    int x=0;
    
    printf("escribe un número :");
    scanf("%d",&n);
    float arreglo[n];
    for(x=0;x<n;x++){
     printf("\n escribe otro número ",x+1);
     scanf("%f",&arreglo[x]);
    }           
    x=0;
    float min = arreglo[0];
    float max = arreglo[0];
    for(x;x<n;x++)
    if (arreglo[x]<min){
        min = arreglo[x];
    }
    if ( arreglo[x]>max){
        max = arreglo[x];
    }
     
    printf("\n el valor minimo es : %f",min); 
    printf("\n el valor máximo es : %f",max);
    
    return (EXIT_SUCCESS);
}

