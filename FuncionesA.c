#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definición del prototipo de función
float arearectangulo(float,float);

int main(int argc, char** argv) {
    int x = 0;
    float base, altura;
    printf("Dame la base del rectangulo: ");
    scanf("%f",&base);
    printf("\nDame la altura del rectangulo: ");
    scanf("%f",&altura);
    
    printf("\nEl area del rectangulo es: %f ", arearectangulo(base,altura));
    
    return (EXIT_SUCCESS);
}

// función ya esta implementada ()
float arearectangulo(float base,float altura){
    float area = (base*altura);
    return area;
}

