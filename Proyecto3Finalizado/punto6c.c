#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


int pedirEntero (char name[]) { 
    int x;
    printf("Ingresa un valor para %s \n", name);
    scanf("%d", &x);
    return x;
}

void imprimirEntero (char name[], int x) {
    printf("El valor de %s es: %d \n", name, x);
}

int main(void) {
//Ejercicio 4b reescrito con las funciones:
    int x1, y1, z, m;
    x1 = pedirEntero("x1");
    y1 = pedirEntero("y1");
    z = pedirEntero("z");
    m = pedirEntero("m");

    if (x1<y1) {
       m = x1;
   
    } else {
       m = y1;
    }
   
    if (m >= z) {
       m = z;
    } 

    imprimirEntero("m", m);

//Que ventajas encontras en esta nueva version? La ventaja es que las funciones son reutilizables, lo que me permiten escribir codigo mas limpio y escalable.

//Ejercicio 1 reescrito:
    int x, y, z1;
    x = pedirEntero("x");
    y = pedirEntero("y");
    z1 = pedirEntero("z1");

    imprimirEntero("x + y + 1", (x + y + 1));
    imprimirEntero("z * z + y * 45 - 15 * x", (z1 * z1 + y * 45 - 15 * x));
    imprimirEntero("y - 2 == (x * 3 + 1) mod 5", (y - 2 == (x * 3 + 1) % 5));
    imprimirEntero("y / 2 * x ", (y / 2 * x ));
    imprimirEntero("y < x * z", (y < x * z1));

//Ejercicio 2 reescrito: Es en esencia lo mismo que el ejericio 1, debo pedir las variables x, y, z, b, w con pedirEnteros y luego imprimir cada una de las operaciones que pide con imprimirEnteros.
    
//Ejercicio 3 reescrito: (Equivalencias x222 = x3, x22 = x2, x2 = x1, y22 = y3)
    int x2, y2, x22, y22, x222;
    x2 = pedirEntero("x2");
    x22 = pedirEntero("x22");
    x222 = pedirEntero("x222");
    y2 = pedirEntero("y2");
    y22 = pedirEntero("y22");
    
    x2 = 5;
    x22 = x22 + y2;
    y2 = y2 + y2;
    y22 = y22 + y22;
    x222 = x222 + y22;

    imprimirEntero("x2", x2);
    imprimirEntero("x22", x22);
    imprimirEntero("y2", y2);
    imprimirEntero("y22", y22);
    imprimirEntero("x222", x222);

    
//Ejercicio 4a: Se puede tambien reescribir asi como el 4b. Lo que varia simplemente es que debo pedir solo dos variables y luego hacer un condicional diferente.
    
    
//Ejercicio 5a reescrito:
    int i1, i2;
    i1 = pedirEntero("i1");
    i2 = pedirEntero("i2");
    
    while (i1 != 0){
      i1 = i1 - 1;
    }
    
    while (i2 != 0){
      i2 = 0;
    }
    
    imprimirEntero("i1", i1);
    imprimirEntero("i2", i2);
    
//Ejercicio 5b reescrito:
    int x5, y5, i5=0;
    x5 = pedirEntero("x5");
    y5 = pedirEntero("y5");

    while (x5 >= y5) {
      x5 = x5 - y5;
      i5 = i5 + 1;
      printf("i, por ahora,", i5);
    }
    printf("Final del bucle. y entra %d veces en x\n", i5);
    
    return 0;
}

/* Ejecucion:
Ingresa un valor para x1 
67
Ingresa un valor para y1
4
Ingresa un valor para z
3
Ingresa un valor para m
6
El valor de m es: 3
Ingresa un valor para x
7
Ingresa un valor para y
3
Ingresa un valor para z1
3
El valor de x + y + 1 es: 11
El valor de z * z + y * 45 - 15 * x es: 39
El valor de y - 2 == (x * 3 + 1) mod 5 es: 0
El valor de y / 2 * x  es: 7
El valor de y < x * z es: 1
Ingresa un valor para x2
4
Ingresa un valor para x22
3
Ingresa un valor para x222
1
Ingresa un valor para y2
2
Ingresa un valor para y22
3
El valor de x2 es: 5
El valor de x22 es: 5
El valor de y2 es: 4
El valor de y22 es: 6
El valor de x222 es: 7
Ingresa un valor para i1
4
Ingresa un valor para i2
2
El valor de i1 es: 0
El valor de i2 es: 0
Ingresa un valor para x5
5
Ingresa un valor para y5
6
Final del bucle. y entra 0 veces en x
 */