#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* BREAK */
    /* local variable definition */
    int a = 10;

    /* while loop execution */
    while( a < 20 )
    {
        printf("value of a: %d\n", a);
        a++;

        if( a > 15)
        {
            /* terminate the loop using break statement */
            break;
        }
    }
    printf("\n");


    /* CONTINUE */
    /* local variable definition */
    a = 10;

    /* do loop execution */
    do
    {
        if( a == 15)
        {
            /* skip the iteration */
            a = a + 1;
            continue;
        }

        printf("value of a: %d\n", a);
        a++;
    } while( a < 20 );
    printf("\n");


    /* GOTO */
    /* local variable definition */
    a = 10;

    /* do loop execution */
    LOOP:do
    {
        if( a == 15)
        {
            /* skip the iteration */
            a = a + 1;
            goto LOOP;
        }

        printf("value of a: %d\n", a);
        a++;
    } while( a < 20 );

    return 0;
}
