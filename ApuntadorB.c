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
    if(*aux1==*aux2){
    printf("son iguales");    
    }
    else{
    printf("no son iguales");    
    }
      
    return (EXIT_SUCCESS);
}

