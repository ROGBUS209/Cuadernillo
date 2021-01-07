#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definición del prototipo de función
float arearombo(float,float);
float perimetrorombo(float,float,float,float);

int main(int argc, char** argv) {
    int x = 0;
    float diagonalmayor, diagonalmenor, ladoA, ladoB, ladoC, ladoD;
    printf("Dame la diagonal mayor del rombo: ");
    scanf("%f",&diagonalmayor);
    printf("\nDame la diagonal menor del rombo: ");
    scanf("%f",&diagonalmenor);
    
    printf("\nEl area del rombo es: %f\n ", arearombo(diagonalmayor,diagonalmenor));
    
    printf("\nDame el lado A del rombo: ");
    scanf("%f",&ladoA);
    
      printf("\nDame el lado B del rombo: ");
    scanf("%f",&ladoB);
    
      printf("\nDame el lado C del rombo: ");
    scanf("%f",&ladoC);
    
      printf("\nDame el lado D del rombo: ");
    scanf("%f",&ladoD);
    
    printf("\nEl perimetro del rombo es : %f", perimetrorombo(ladoA,ladoB,ladoC,ladoD));
    
    return (EXIT_SUCCESS);
}

// función ya esta implementada ()

float arearombo(float diagonalmayor,float diagonalmenor){
    float area = (diagonalmayor*diagonalmenor)/2;
    return area;
}
float perimetrorombo(float ladoA,float ladoB,float ladoC,float ladoD){
float perimetro =(ladoA+ladoB+ladoC+ladoD);
return perimetro;
}

