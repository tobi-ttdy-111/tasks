
// includes
#include <stdio.h>
#include <stdlib.h>


// main
int main() {

    int * p;
    p = malloc( sizeof( int ) * 10 );

    for ( int i = 0; i < 10; i++ ) {
        * ( p + i ) = i;
        printf( "p[ %i ] = %i\n", i, * ( p + i ) );
    };

    return 0;

};


/*
instrucciones
1. Crear un apuntador
2. Extender el espacio ( bites ) del apuntador hasta 40 bites ( 10 veces 1 entero )
3. Llenar cada uno de esos 0 espacios
4. Mostrar cada apuntador con su valor
*/
