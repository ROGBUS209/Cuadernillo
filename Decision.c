/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Decision.c
 * Author: Berenice
 *
 * Created on 30 de diciembre de 2020, 11:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float a = 9;
    float b = 11;
    
    if(a > b){
    printf("a es mayor");    
    }
    else
    if(b > a ){
    printf("b es mayor");    
    }
   
    return (EXIT_SUCCESS);
}

