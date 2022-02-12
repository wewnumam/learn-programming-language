#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int c;
    // printf( "Enter a value : ");
    // c = getchar( );
    // printf( "\nYou entered: ");
    // putchar( c );

    // char str[100];
    // printf( "Enter a value : ");
    // gets( str );
    // printf( "\nYou entered: ");
    // puts( str );

    char str[100];
    int i;
    printf( "Enter a value : ");
    scanf("%s %d", str, &i);
    printf( "\nYou entered: %s %d ", str, i);

    printf("\n");
    
    return 0;
}
