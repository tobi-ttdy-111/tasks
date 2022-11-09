
// includes
#include <stdio.h>


// main
int main() {

    // arreglo
    int numeros[ 20 ] = { 1, 20, 200, 4, 1, 6, 7, 8, 9, 0, 11, 200, 13, 14, 15, 16, 17, 18, 200, 1 };

    // calcularMedia
    int suma;
    float media;
    for ( int i = 0; i < 20; i++ ) { suma += numeros[ i ]; };
    media = suma / 20;
    printf( "La media es: %.2f", media );

    // calcularModa
    int tempVeces = 0, vecesR = 0, repeticiones = 0, valorR;
    for ( int i = 0; i < 20; i++ ) {
        for ( int j = 0; j < 20; j++ ) {
            if ( numeros[ i ] == numeros[ j ] ) {
                // printf( "\nnumeros[ i ] = %i, numeros[ j ] = %i", numeros[ i ], numeros[ j ] );
                tempVeces = tempVeces + 1;
            };
        };
        if ( tempVeces > vecesR ) {
            repeticiones = tempVeces;
            valorR = numeros[ i ];
        };
        vecesR = tempVeces;
        tempVeces = 0;
    };
    printf( "\nLa moda es: %i, se repitio %i veces", valorR, repeticiones );

    return 0;

};