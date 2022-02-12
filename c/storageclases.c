#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
        The auto storage class is the default storage class for all 
        local variables.
     */
    int mount;
    auto int month;


    /* 
        The register storage class is used to define local variables 
        that should be stored in a register instead of RAM. This means 
        that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied 
        to it (as it does not have a memory location). The register 
        should only be used for variables that require quick access 
        such as counters.
     */
    register int miles;

    return 0;
}
