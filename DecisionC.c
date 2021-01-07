/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DecisionC.c
 * Author: Berenice
 *
 * Created on 3 de enero de 2021, 10:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float F = 45.9; 
    float U = 63.5;
    float N = 42.3;
    float K = 23.1;
    
    if(F*U > F*N, F*U > F*K, F*U > U*N, F*U > U*K, F*U > N*K ){
    printf("El resultado de F*U es mayor que los demas resultados");    
    }
    else
    if(F*N > F*U, F*N > F*K, F*N > U*N, F*N > U*K, F*N > N*K ){
    printf("El resultado de F*N es mayor que los demas resultados");    
    }
    else
    if(F*K > F*U, F*K > F*N, F*K > U*N, F*K > U*K, F*K > N*K ){
    printf("El resultado de F*K es mayor que los demas resultados");    
    }     
    else
    if(U*N > F*U, U*N > F*N, U*N > F*K, U*N > U*K, U*N > N*K ){
    printf("El resultado de U*N es mayor que los demas resultados");    
    } 
    else
    if(U*K > F*U, U*K > F*N, U*K > F*K, U*K > U*N, U*K > N*K ){
    printf("El resultado de U*K es mayor que los demas resultados");    
    }    
    else
    if(N*K > F*U, N*K > F*N, N*K > F*K, N*K > U*N, N*K > U*K){
    printf("El reslutado de N*K es mayor que los demas resultadod");    
    }   
    float res1 = F*U;
    printf("\n%f\n", res1);
    float res2 = F*N;
    printf("\n%f\n", res2);
    float res3 = F*K;
    printf("\n%f\n", res3);
    float res4 = U*N;
    printf("\n%f\n", res4);
    float res5 = U*K;
    printf("\n%f\n", res5);
    float res6 = N*K;
    printf("\n%f\n", res6);
    return (EXIT_SUCCESS);
}

