#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {

    int N = 8;
    int *aux1 = &N;
    printf("%p\n",aux1);
    printf("%d\n",*aux1);
    
    N = 92;
    *aux1 = 93;
    printf("%d\n",N);
    
    int E = 3;
    int *aux2 = &E;
    printf("%p\n", aux2);
    printf("%d\n",*aux2);
    E = 70;
    *aux2 = 46;
    printf("%d\n",E);
    
    int T = 2;
    int *aux3 = &T;
    printf("%p\n", aux3);
    printf("%d\n",*aux3);
    T = 40;
    *aux3 = 70;
    printf("%d\n",T);

    float sum1 = *aux1 + *aux2;
    printf("\n%f\n", sum1);
    
    float sum2 = *aux1 + *aux3;
    printf("\n%f\n", sum2);
    
    float sum3 = *aux2 + *aux3;
    printf("\n%f\n", sum3);
    
    return (EXIT_SUCCESS);
}

