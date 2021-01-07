
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 int n;
    int x = 0;
    
    printf("Escribe un número : ");
    scanf ("%d", &n);
    
    float arreglo [n];
    for(x = 0;x<n;x++){ 
        printf("\n escribe otro número : %d\n ",x+1);
        scanf ("%f", &arreglo[x]);
    }        
    x=0;
    float sum;
    for(x;x<n;x++){
        sum = sum + arreglo [x];
    }    
    printf("\n prom. : %f", sum/n);  
    return (EXIT_SUCCESS);
}

