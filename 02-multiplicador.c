
// imports
#include <stdio.h>
#include <stdlib.h>


// main
int main() {

    int arrayNum[ 100 ];
    int stop;
    for ( int i = 0; i < 100; i++ ) {
        int valor;
        printf( "Valor numero %i = ", i + 1 );
        scanf( "%i", &valor );
        arrayNum[ i ] = valor;
        if ( valor == 0 ) {
            stop = i;
            break;
        };
    };

    system( "cls" );
    printf( "Valores ingresados correctamente\n" );
    printf( "\nLos 3 valores mas grandes son:" );

    int mayor1 = 0;
    int posMayor1 = 0;
    for ( int i = 0; i < stop; i++ ) {
        if ( arrayNum[ i ] > mayor1 ) {
            mayor1 = arrayNum[ i ];
            posMayor1 = i;
        };
    };
    arrayNum[ posMayor1 ] = 0;
    printf( "\nPrimer valor mayor: %i", mayor1 );

    int mayor2 = 0;
    int posMayor2 = 0;
    for ( int i = 0; i < stop; i++ ) {
        if ( arrayNum[ i ] > mayor2 ) {
            mayor2 = arrayNum[ i ];
            posMayor2 = i;
        };
    };
    arrayNum[ posMayor2 ] = 0;
    printf( "\nSegundo valor mayor: %i", mayor2 );

    int mayor3 = 0;
    int posMayor3 = 0;
    for ( int i = 0; i < stop; i++ ) {
        if ( arrayNum[ i ] > mayor3 ) {
            mayor3 = arrayNum[ i ];
            posMayor3 = i;
        };
    };
    arrayNum[ posMayor3 ] = 0;
    printf( "\nTercer valor mayor: %i\n", mayor3 );

    printf( "\nMultiplicacion: %i", mayor1 * mayor2 * mayor3 );

    return 0;

};