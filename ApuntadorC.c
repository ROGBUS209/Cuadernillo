#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int R = 8;
    int *aux1 = &R;
    printf("%p\n",aux1);
    printf("%d\n",*aux1);
    
    R = 92;
    *aux1 = 93;
    printf("%d\n",R);
    
    int K = 3;
    int *aux2 = &K;
    printf("%p\n", aux2);
    printf("%d\n",*aux2);
    K = 70;
    *aux2 = 46;
    printf("%d\n",K);
    
    int O = 2;
    int *aux3 = &O;
    printf("%p\n", aux3);
    printf("%d\n",*aux3);
    O = 40;
    *aux3 = 70;
    printf("%d\n",O);

    float mult1 = (*aux1) * (*aux2);
    printf("\n%f\n", mult1);
    
    float mult2 = (*aux1) * (*aux3);
    printf("\n%f\n", mult2);
    
    float mult3 = (*aux2) * (*aux3);
    printf("\n%f\n", mult3);
    
    return (EXIT_SUCCESS);
}

