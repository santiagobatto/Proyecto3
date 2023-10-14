#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


int pedirEntero (char name) { 
    int x;
    printf("Ingresa un valor para %c \n", name);
    scanf("%d", &x);
    return x;
}

void imprimirEntero (char name, int x) {
    printf("El valor de %c es: %d \n", name, x);
}

int main(void) {

    int n;

    n = pedirEntero('n');

    imprimirEntero('n', n);

    return 0;
}
/* Ejecucion:
Ingresa un valor para n 
7
El valor de n es: 7
 */