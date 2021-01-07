#include <stdio.h>
#include <stdlib.h>

//definición
void checar(int);
void DaP();
void EaP();
void LaP();
void PaD();
void PaE();
void PaL();

int main(int argc, char** argv) {
    int x;
    
    do{
   x = 0; 
   system("cmd /c cls");
   printf("\n--seleccione la opcion deseada:\n");
   printf("1 - valor de dolar a peso es \n");
   printf("2 - valor del euro a peso es \n");
   printf("3 - valor de libra a peso es \n");
   printf("4 - valor de peso a dolar es \n");
   printf("5 - valor de peso al euro es \n ");
   printf("6 - valor de peso a libra es \n ");
   printf("7 - salir \n");
   printf("seleccione: ");
   scanf("%d",&x);
   checar(x);
    }
    //Mostramos el menú hasta que la opción sea cero
    while(x != 7);
    return (EXIT_SUCCESS);
}
//funcion ya esta implementada ()

void checar (int x){
switch(x){
case 1:{
DaP();
break;
    } 
case 2:{
EaP();
break;
    }
case 3:{
LaP();
break;
    } 
case 4:{
PaD();
break;
    } 
case 5:{
PaE();
break;
    } 
case 6:{
PaL();
break;
    } 
case 7:{
printf("salir\n");
break;
    } 
default:{
printf("defecto\n");
break;
    } 
}    
}
 void DaP(){
    printf("\n ingrese la cantidad de dolares: ");
    float D = 0; 
    scanf("%f",&D);
    float P = D * 19.64;
    printf("la cantidad en pesos es : %f \n",P);
    system("cmd /c pause");
}
void EaP(){
    printf("\ningrese la cantidad de euros: ");
    float E = 0; 
    scanf("%f",&E);
    float P = E * 24.22;
    printf("la cantidad en pesos es : %f\n", P);
    system("cmd /c pause");
}
void LaP(){
    printf("\ningresa la cantidad de libras esterlinas: ");
    float L = 0; 
    scanf("%f",&L);
    float P = L * 26.73;
    printf("la cantidad en pesos es : %f \n", P);
    system("cmd /c pause");
}
void PaD(){
    printf("\ningresa la cantidad de pesos: ");
    float P = 0;
    scanf("%f",&P);
    float D = P*0.051;
    printf("la cantidad en dolares es: %f \n", D);
    system("cmd /c pause");
}
void PaE(){
    printf("\ningresa la cantidad de pesos: ");
    float P = 0; 
    scanf("%f",&P);
    float E = P*0.041;
    printf("la cantidad en euros es : %f \n", E);
    system("cmd /c pause");
}

void PaL(){
    printf("\ningresa la cantidad de pesos: ");
    float P = 0; 
    scanf("%f",&P);
    float L = P*0.037;
    printf("la cantidad en libras esterlinas es : %f\n ", L);
    system("cmd /c pause");
}


