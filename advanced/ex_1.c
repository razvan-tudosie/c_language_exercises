#include <stdio.h>

// ## The context ############################
// Se citește un număr natural 𝑛. Să se afișeze frecvența fiecărei cifre din scrierea sa.
// ##############################
// Author: Andrei399
// Author Link: https://github.com/andrei399
// ##############################

int main() {

    int v[10] = {0}; // all 10 numbers are equel to 0
    int n, aux, i;

    printf("n = ");
    scanf("%d", &n);
    
    while (n != 0){
        aux = n % 10;
        v[aux]++;
        n = n / 10;
    }
    
    for (i = 0; i < 10; i++){
        printf("%d apare de %d ori\n",i ,v[i]);
    }

    return 0;
}