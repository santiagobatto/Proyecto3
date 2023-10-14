#include <stdio.h>
#include <stdbool.h>

int main(){

////////////////////////////////// Inciso a /////////////////////////////////////////////////////////

int x, y, x1, y1;

printf("Problema (e)");
printf ("\nIngresa 2 valores enteros para las variables 'x' e 'y': " );
scanf ("%d %d", &x, &y);

if (x>=y) x=0;
else if(x<=y) x=2;

printf ("\nAhora 'x' es: %d ,e 'y' es: %d\n", x, y);

/*  Problema (e)
Ingresa 2 valores enteros para las variables 'x' e 'y':
4
6
Ahora 'x' es: 2 e 'y' es: 6
*/

printf("\nProblema (f)");
printf("\nIngresa otros 2 valores enteros: ");
scanf("%d %d", &x1, &y1);

if (x1>=y1) x1=0;
else if (x1<=y1) x1=2;

printf ("\nAhora 'x1' es: %d e 'y1' es: %d \n", x1, y1);

/*Problema (f)
Ingresa otros 2 valores enteros:
8
12
Ahora 'x1' es: 2 e 'y1' es: 12
*/

////////////////////////////////// Inciso b /////////////////////////////////////////////////////////

int x2,y2,z,m;

printf("\nInciso b");

printf("\nIngresa 4 enteros 'x2', 'y2', 'z', 'm': ");
scanf("%d %d %d %d", &x2, &y2, &z, &m);

if (x2 < y2) m = x2;
else m = y2;

printf ("\n Ahora 'x2' es: %d e 'y2' es: %d \n", x2, y2);

if (m>=z) m = z;
printf ("\n Ahora 'm' es: %d y 'z' es: %d \n", m, z);

printf("\nLos valores finales son: 'x2' = %d , 'y2' = %d 'm' = %d 'z' = %d ", x2, y2, z, m);

/*Inciso b
Ingresa 4 enteros 'x2', 'y2', 'z', 'm':
5
4
8
0
Ahora 'x2' es: 5 e 'y2' es: 4
Ahora 'm' es: 4 y 'z' es: 8
Los valores finales son: 'x2' = 5 , 'y2' = 4 'm' = 8 'z' = 4
*/

return 0;

}