#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int arreglo[10];
    int x = 9;
    arreglo[0]  = 2;
    arreglo[1]  = 3;
    arreglo[2]  = arreglo[0]+arreglo[1];
    arreglo[3]  = arreglo[1]+arreglo[2];
    arreglo[4]  = arreglo[2]+arreglo[3];
    arreglo[5]  = arreglo[3]+arreglo[4];
    arreglo[6]  = arreglo[4]+arreglo[5];
    arreglo[7]  = arreglo[5]+arreglo[6];
    arreglo[8]  = arreglo[6]+arreglo[7];
    arreglo[9]  = arreglo[7]+arreglo[8];
    
    for (x;x<=10;x=x+1){
    printf("ingresa un valor");
    scanf("%d",&x);
    printf("%d\n",arreglo[x]);   
    if(arreglo[x]<10)
    printf("ingresa otro valor");
    scanf("%d",&x);
    printf("%d\n",arreglo[x]);    
    }
    return (0);
    
}
   

