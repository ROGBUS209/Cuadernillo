#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float División(float,float);

int main(int argc, char** argv) {
    int x = 0;
    float R,K;
    
    printf("\nDame el Dividendo: ");
    scanf("%f",&R);
    printf("\nDame el Divisor: ");
    scanf("%f",&K);
    
    printf("\nEl resultado es: %f ", División(R,K));
    
    
    return (0);
}

float División(float R, float K){
float div = (R/K); 
return div;
}    
