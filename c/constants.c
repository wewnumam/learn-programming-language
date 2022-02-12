#include <stdio.h>

/* #DEFINE PREPROCESSOR */
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{
    /* CONST KEYWORD */
    // const int LENGTH = 10;
    // const int WIDTH = 5;
    // const char NEWLINE = '\n';

    int area;
    area = LENGTH * WIDTH;

    printf("value of area : %d", area);
    printf("%c", NEWLINE);
    
}
