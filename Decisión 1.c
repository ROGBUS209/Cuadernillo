#include <stdio.h>
#include <stdlib.h>
// ¿que cantidad de frutas es mayor?
int main(int argc, char** argv) {
    float piña = 1000;
    float kiwi = 7000;
    float guanabanas = 5000;
    
    if(piña > kiwi, piña > guanabanas){
    printf("hay mas piña");    
    }
    else
    if(kiwi > piña, kiwi > guanabanas){
    printf("hay mas kiwi");    
    }
    else
    if(guanabanas > piña, guanabanas > kiwi){
    printf("Hay mas guanabanas");    
    }    
    return (0);
}

