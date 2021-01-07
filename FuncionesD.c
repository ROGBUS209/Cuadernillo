#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definición del prototipo de función
float PerimetroCirculo(float);

int main(int argc, char** argv) {
    int x = 0;
    float rad;
    
    printf("\nDame el radio del circulo: ");
    scanf("%f",&rad);
    
    printf("\nEl area del circulo es: %f ", PerimetroCirculo(rad));
    
    
    return (0);
}

float PerimetroCirculo(float ra){
float perimetro = (2*3.14159)*ra; 
return perimetro;
}    

