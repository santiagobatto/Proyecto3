#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


void imprimirHola(void) {
    printf("hola \n");
}
void imprimirChau(void) {
    printf("chau \n");
}

int main(void) {
    imprimirHola();
    imprimirHola();
    imprimirChau();
    imprimirChau();
    
}
/* Ejecucion:
hola 
hola
chau
chau
*/