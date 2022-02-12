#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main(int argc, char const *argv[])
{
    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
    }
    else
        fclose (pf); 


    /* Divide by Zero Errors */
    int dividend = 20;
    int divisor = 0;
    int quotient;
    if( divisor == 0)
    {
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient );
    exit(EXIT_SUCCESS);

    return 0;
}
