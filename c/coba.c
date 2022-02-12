#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main () {
    for (int i=0; i < 5; i++) {
        char asterix[6][6];
        for (int j=5; j > i; j--) {
            sleep(1);
            strcat(asterix[i], "*");
            printf("%s", asterix[i]);
        }
        printf("\n");
    }
    return 0;
}