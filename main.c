/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 16 de agosto de 2018, 11:49 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main() {
    printf("Buen día usuario, ahora calcularemos el area de un circulo");
    printf("Refiere el valor de radio");
    float radio;
    scanf("%f",&radio);
    float pi=3.1416;
    float area= pi*(pow(radio,2));
    printf("El area d dicho triangulo es: %f",area);

    return 0;
}

