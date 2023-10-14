#include <stdio.h>
#include <stdbool.h>

int main(void){

    int x, y, z, b, w;
    bool b1, w1;

    printf("Ingresa un 'x', entero divisible por 4: ");
    scanf("%d", &x);
    printf("\nSi 'x' es divisible, Resultado != 0, si no, Resultado == 0 \n'x' es divisible? Resultado = %d", (x % 4 == 0));

    /*
    Ingresa un 'x', entero divisible por 4: 16
    Si 'x' es divisible, Result != 0, si no, Result == 0
    X es divisible? Result = 1
    */

    printf("\nIngresa un 'y' opuesto de 'x': ");
    scanf("%d", &y);
    printf("\nIngresa un 'z' que  cumpla con 'z' = 2 * 'x': ");
    scanf("%d", &z);
    printf("\nSi los valores ingresados son correctos, Resultado != 0, si no, Resultado == 0 \nResultado = %d \n", ((x + y == 0) && (y - x == (-1) * z)));

    /*
    Ingresa un 'y' opuesto de 'x': -16
    Ingresa un 'z' que  cumpla con 'z' = 2 * 'x': 32
    Si los valores ingresados son correctos, Result != 0, si no, Result == 0
    Result = 1
    */

    printf("\nIngresa un valor para 'b': ");
    scanf("%d", &b);
    b1 = b;

    if ( b == 0 ) {
        printf("\nIngresa un valor para 'w' igual a 0: ");
        scanf("%d", &w);
        w1 = w;
        if (w != 0) printf("\nUps! No es el resultado buscado, ( not b && w) es: %d \n", ((!b1) && w1));
        else printf("\nEl resultado de ( not b && w) es: %d \n", ((!b1) && w1));
    }
    else {
        printf("\nIngresa cualquier valor entero para 'w': ");
        scanf("%d", &w);
        w1 = w;
        printf("\nEl resultado de ( not b && w) es: %d \n", ((!b1) && w1));
    }

    /*
    Ingresa un valor para 'b': 5
    Ingresa cualquier valor entero para 'w': 3
    El resultado de ( not b && w) es: 0

    Ingresa un valor para 'b': 0
    Ingresa un valor para 'w' igual a 0: 0
    El resultado de ( not b && w) es: 0

    Ingresa un valor para 'b': 0
    Ingresa un valor para 'w' igual a 0: 7
    Ups! No es el resultado buscado, ( not b && w) es: 1

    */

    return 0;
}
