#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i=1;
    int k=1;
    int j=100;
    int l=10;
    for (i;i<=j;i++){
        for(k=1;k<=l;k++)
        printf("%d X %d = %d\n",i,k,i*k);
        } 
    return (EXIT_SUCCESS);
}

