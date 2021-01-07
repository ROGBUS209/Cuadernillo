#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int X = 2;
       int Y = 2;
       int R = 20;
       int B = 20;
        while(X<=R){
            Y = 2;
           
           while(Y<=B){
           printf("%d X %d = %d\n",X,Y,X*Y);
           Y = Y + 2;
       }
       X = X + 2;
        }
    
    return (EXIT_SUCCESS);
}

