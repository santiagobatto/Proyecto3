#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


bool pedirBooleano (char name) { 
    int y;
    bool x;
    printf("Ingresa un valor para %c \n", name);
    scanf("%d", &y);
    x = y;
    return x;
}

void imprimirBooleano (char name, int x) {
    if (x) printf("%c es verdadero", name);
    else printf("%c es falso", name);
}

int main(void) {

    bool b;

    b = pedirBooleano('b');

    imprimirBooleano('b', b);

    return 0;
}

/* Ejecucion:
Ingresa un valor para b 
1
b es verdadero
PS C:\Users\santi\OneDrive\Escritorio\study\1er-año\c\Proyecto3> ./entradas_bool
Ingresa un valor para b
0
b es falso
 */