#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int x, x2, x3, y, y2;

    printf("Ingresa un entero para la variable 'x': ");
    scanf("%d", &x);
    x=5;
    printf("\nTras la asignacion 'x' = 5 ahora 'x' vale: %d", x);


    printf("\nIngresa un entero para 'x2': ");
    scanf("%d", &x2);
    printf("\nIngresa un entero para 'y': ");
    scanf("%d", &y);
    printf("\n'x2' es = %d", x2);
    printf("\n'y' es = %d", y);
    x2 += y;
    printf("\nTras la operacion ('x2'='x2'+''y') ahora 'x2' vale = %d", x2);
    printf("\n'y' continua siendo = %d", y);
    y += y;
    printf("\nTras la operacion ('y'='y'+''y') ahora 'y' vale = %d", y);
    printf("\n'x2' continua siendo = %d", x2);


     printf("\nIngresa un entero para 'x3': ");
    scanf("%d", &x3);
    printf("\nIngresa un entero para 'y2': ");
    scanf("%d", &y2);
    printf("\n'x3' es = %d", x3);
    printf("\n'y2' es = %d", y2);
    y2 += y2;
    printf("\nTras la operacion ('y2'='y2'+''y2') ahora 'y2' vale = %d", y2);
    printf("\n'x3' continua siendo = %d", x3);
    x3 += y2;
    printf("\nTras la operacion ('x3'='x3'+''y2') ahora 'x3' vale = %d", x3);
    printf("\n'y2' continua siendo = %d", y2);

    return 0;

 }