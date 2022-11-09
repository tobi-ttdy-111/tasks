
// includes
#include <stdio.h>
#include <stdlib.h>


// main
int main() {

    int opcion;
    int arreglo[ 3 ][ 3 ][ 3 ];
    int tamaños[ 3 ];   // [ 3, 1, 2 ]
    int opc1 = 0; // false
    int opc2 = 0; // false

    do {

        printf( "1 - Configurar dimensiones" );
        printf( "\n2 - Llenar arreglo" );
        printf( "\n3 - Mostrar arreglo" );
        printf( "\n4 - Salir" );
        printf( "\nIngrese la opcion: " );
        scanf( "%i", &opcion );

        switch ( opcion ) {

            case 1:
                system( "cls" );
                int tamaño;
                for ( int i = 1; i <= 3; i++ ) {
                    printf( "Tamano de la dimension %i: ", i );
                    scanf( "%i", &tamaño);
                    tamaños[ i - 1 ] = tamaño;
                };
                arreglo[ tamaños[ 0 ] ][ tamaños[ 1 ] ][ tamaños[ 2 ] ];
                system( "cls" );
                opc1 = 1;
                opc2 = 0;
            break;

            // arreglo[ 2 ][ 2 ][ 2 ]

            case 2:
                system( "cls" );
                if ( opc1 == 0 ) {
                    printf( "\nAntes configura las 3 dimensiones de tu arreglo ( 1 )\n" );
                } else {
                    int valor;
                    for ( int d1 = 0; d1 < tamaños[ 0 ]; d1 ++ ) {
                        for ( int d2 = 0; d2 < tamaños[ 1 ]; d2 ++ ) {
                            for ( int d3 = 0; d3 < tamaños[ 2 ]; d3 ++ ) {
                                printf( "Ingresa el valor en [ %i ][ %i ][ %i ] : ", d1, d2, d3 );
                                scanf( "%i", &valor);
                                arreglo[ d1 ][ d2 ][ d3 ] = valor;
                            };
                        };
                    };
                    system( "cls" );
                    opc2 = 1;
                };
            break;

            case 3:
                if ( opc1 == 0 && opc2 == 0 ) {
                    printf( "\nAntes configura las 5 dimensiones de tu arreglo ( 1 ), y llenalo ( 2 )\n" );
                } else if ( opc2 == 0 ) {
                    printf( "\nDebes de llenar tu arreglo antes ( 2 )\n" );
                } else {
                    system( "cls" );
                    for ( int d1 = 0; d1 < tamaños[ 0 ]; d1 ++ ) {
                        for ( int d2 = 0; d2 < tamaños[ 1 ]; d2 ++ ) {
                            for ( int d3 = 0; d3 < tamaños[ 2 ]; d3 ++ ) {
                                printf( "arreglo[ %i ][ %i ][ %i ] = %i\n", d1, d2, d3, arreglo[ d1 ][ d2 ][ d3 ] );
                            };
                        };
                    };
                    printf( "\n" );
                };
            break;

            case 4:
                printf( "\nBye :3" );
            break;



        };

    } while ( opcion != 4 );

    return 0;

};
