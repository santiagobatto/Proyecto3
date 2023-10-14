#include <stdio.h>
#include <stdbool.h>

int main(void){

    int x, y, z, temp1, temp2;
    bool b1, b2;

    printf ("Ingresa el valor de 'x', un numero entero: ");
    scanf ("%d", &x);
    printf ("\nIngresa el valor de 'y', otro numero entero: ");
    scanf ("%d", &y);
    printf ("\nIngresa el valor de 'z', otro numero entero: ");
    scanf ("%d", &z);
    
    printf ("\nEl resultado de la operacion ( x + y + 1 ) es: %d", x + y + 1);
    printf ("\nEl resultado de la operacion ( z * z + y * 45 - 15 * x ) es: %d", z * z + y * 45 - 15 * x);
    
    temp1 = ( y - 2 == ( x * 3 + 1 ) % 5);
    b1 = temp1;
    if (!b1) {
        printf("\nEsta expresion ( y - 2 == ( x * 3 + 1 ) %% 5) con los valores dados, es Falsa :( ");
    }
    else {
        printf("\nEsta expresion ( y - 2 == ( x * 3 + 1 ) %% 5) con los valores dados, es Verdadera :) ");
    }

    printf ("\nEl resultado de la operacion ( y / 2 * x ) es: %d",  y / 2 * x );

    temp2 = (y < x * z);
    b2 = temp2;
    if (!b2) {
        printf ("\nEsta expresion ( y < x * z ) con los valores dados, es Falsa :( ");
    }
    else {
        printf("\nEsta expresion ( y < x * z ) con los valores dados, es Verdadera :) ");
    }
    /*Ingresa el valor de x, un numero entero: 7
    Ingresa el valor de y, otro numero entero: 3
    Ingresa el valor de z, otro numero entero: 5
                El resultado de la operacion ( x + y + 1 ) es: 11
                El resultado de la operacion ( z * z + y * 45 - 15 * x ) es: 55
                Esta expresion ( y - 2 == ( x * 3 + 1 ) % 5) con los valores dados, es Falsa :(
                El resultado de la operacion ( y / 2 * x ) es: 7
                Esta expresion ( y < x * z ) con los valores dados, es Verdadera :)

        
    Ingresa el valor de x, un numero entero: 1
    Ingresa el valor de y, otro numero entero: 10
    Ingresa el valor de z, otro numero entero: 8
                El resultado de la operacion ( x + y + 1 ) es: 12
                El resultado de la operacion ( z * z + y * 45 - 15 * x ) es: 499
                Esta expresion ( y - 2 == ( x * 3 + 1 ) % 5) con los valores dados, es Falsa :(
                El resultado de la operacion ( y / 2 * x ) es: 5
                Esta expresion ( y < x * z ) con los valores dados, es Falsa :(

    La ultima expresion es de tipo Int, en C, pero como es una operacion algebraica equivale a True si es != 0 y 0 si es == False*/

    return 0;
}
