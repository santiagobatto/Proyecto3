#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void) {
    
////////////////////////////////// Inciso a ///////////////////////////////////////

    int i1, i2;
    printf("\nIngresa un valor para 'i1': ");
    scanf("%d", &i1);
    printf("\nIngresa un valor para 'i2': ");
    scanf("%d", &i2);
  
    while (i1 != 0){
      i1 = i1 - 1;
    }
    
    while (i2 != 0){
      i2 = 0;
    }
  
    printf("'i1' vale %d \n", i1);
    printf("'i2' vale %d \n", i2);


////////////////////////////////// Inciso b ///////////////////////////////////////

    int x, y, i=0;
  
    printf("Ingrese un valor para 'x': \n");
    scanf ("%d", &x);
    printf("Ingrese un valor para 'y': \n");
    scanf ("%d", &y);

    while (x >= y) {
      x = x - y;
      i = i + 1;
      printf("Actualmente, 'i' vale: %d, 'x' vale: %d \n", i, x);
    }
  
    printf("Fin bucle while. 'y' entra %d veces en 'x'\n", i); 

////////////////////////////////// Inciso c ///////////////////////////////////////

    int x1, i3, temp;
    bool res;

    printf("Ingrese un entero 'x', 'i' y 'temp':");
    scanf ("%d %d %d", &x1 , &i3, &temp);
    res = temp;
    i3 = 2;
    res = true;
    
    while (i3<x1 && res) {
      res = res && ((x1 % i3) != 0);
      i3 = i3 + 1;
      printf("Actualmente, 'i' vale: %d \n", i3);
    }
    
    printf("'i' es %d \n", i3);


    return 0;
}

/* Ejecuciones:

Ingresa un valor para 'i1': 4
Ingresa un valor para 'i2': 3
'i1' vale 0 
'i2' vale 0


Ingrese un valor para 'x':
6
Ingrese un valor para 'y': 
9
Fin bucle while. 'y' entra 0 veces en 'x'


Ingrese un entero 'x', 'i' y 'temp':76
3
2
Actualmente, 'i' vale: 3 
'i' es 3

*/