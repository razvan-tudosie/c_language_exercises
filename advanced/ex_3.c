#include <stdio.h>

// ## The context ############################
// Se citește un număr natural nenul 𝑛. Să se calculeze suma 𝑆𝑛=1∗2+2∗3+⋯++(𝑛−1)∗𝑛.
// ##############################
// ##############################
// Author: Andrei399
// ##############################

int main() {

    int n, s, i = 2;

    printf("n = ");
    scanf("%d", &n);

    while ( i < n - 1){
        s += (i - 1) * i;
        i++;
    }
    printf("Sn = %d \n", s);


    return 0;
}