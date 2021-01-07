/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   decisiones.c
 * Author: Berenice
 *
 * Created on 30 de diciembre de 2020, 11:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float Verdes = 1100;
    float Azules = 900;
    float Naranjas = 400;
    float Amarillos = 300;
    
    if(Verdes > Azules, Verdes > Naranjas, Verdes > Amarillos){
    printf("Los Verdes son mayoría");    
    }
    else
    if(Azules > Verdes, Azules > Naranjas, Azules > Amarillos){
    printf("Los Azules son mayoría");    
    }
    else
    if(Naranjas > Verdes, Naranjas > Azules, Naranjas > Amarillos){
    printf("Los Naranjas son mayoría");    
    }
    else
    if(Amarillos > Verdes, Amarillos > Azules, Amarillos > Naranjas){
    printf("Los Amarillos son mayoría");    
    }
    
    return (EXIT_SUCCESS);
}

