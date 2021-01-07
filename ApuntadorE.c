#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int B = 8;
    int *aux1 = &B;
    printf("%p\n",aux1);
    printf("%d\n",*aux1);
    
    B = 92;
    *aux1 = 93;
    printf("%d\n",B);
    
    int U = 3;
    int *aux2 = &U;
    printf("%p\n", aux2);
    printf("%d\n",*aux2);
    U = 70;
    *aux2 = 46;
    printf("%d\n",U);
    
    int S = 2;
    int *aux3 = &S;
    printf("%p\n", aux3);
    printf("%d\n",*aux3);
    S = 40;
    *aux3 = 70;
    printf("%d\n",S);

    float res1 = *aux1 - *aux2;
    printf("\n%f\n", res1);
    
    float res2 = *aux1 - *aux3;
    printf("\n%f\n", res2);
    
    float res3 = *aux2 - *aux3;
    printf("\n%f\n", res3);
    
    return (EXIT_SUCCESS);
}

