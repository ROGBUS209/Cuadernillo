#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    float a = 45.6;
    float b = 785.12;
    float c = 4870.2;
    float d = 4506.5;
    float e = 4564.4;
    
    if(a*b+c!=d*e+c){
    printf("el resultado de ambos no es el mismo");    
    }
    else
    if(a*b+c==d*e+c){
    printf("el resultado de ambos es igual");    
    }    
    float res1 = a*b+c;
    printf("\n%f", res1);
    float res2 = d*e+c;
    printf("\n%f", res2);
    
    return (EXIT_SUCCESS);
}

