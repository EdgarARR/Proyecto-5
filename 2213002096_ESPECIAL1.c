#include <stdio.h>

int main()
{
    int d, v1, v2, v3;

    printf( "\n   Valor de a: " );
    scanf( "%d", &v1 );
    printf( "\n   Valor de b: " );
    scanf( "%d", &v2 );
    printf( "\n   Valor de c: " );
    scanf( "%d", &v3 );
    printf( "\n  intercambiando los valores..." );

    d = v3;
    v3 = v2;
    v2 = v1;
    v1 = d;

    printf( "\n\n   Ahora, el valor de a es: %d", v1 );
    printf( "\n   Ahora, el valor de b es: %d", v2 );
    printf( "\n   Ahora, el valor de c es: %d", v3 );

    return 0;
}
