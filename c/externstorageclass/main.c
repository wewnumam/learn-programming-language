/* 
    Run with the following command:
    $ gcc main.c support.c
 */

#include <stdio.h>

int count;
extern void write_extern();

int main(int argc, char const *argv[])
{
    count = 5;
    write_extern();

    return 0;
}
