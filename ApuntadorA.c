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
    R = 70;
    *aux2 = 46;
    printf("%d\n",K);
    
    int O = 2;
    int *aux3 = &O;
    printf("%p\n", aux3);
    printf("%d\n",*aux3);
    O = 70;
    *aux2 = 46;
    printf("%d\n",O);
    
    return (EXIT_SUCCESS);
}

