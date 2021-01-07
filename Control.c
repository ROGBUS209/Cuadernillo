#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int D = 10;
    int R = 0;
    int E = 0;
    int A = 1;
    int M = 1;
    
    printf("0, ");
    
    while(M<D) {
      E = A;
      A = R;
      R = E+A;
      M = M+1 ;      
      printf ("%d,",R);
      }           
    
    return (EXIT_SUCCESS);
}

