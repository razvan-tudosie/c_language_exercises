#include <stdio.h>

// ## The context ############################
// Scrieți un program care afișează puterile lui 2 aflate într-un interval [𝑎,𝑏].
// De exemplu, în intervalul [10,100] se găsesc următoarele puteri ale lui 2: 16,32 și 64.
// ##############################
// ##############################
// Author: Vlad Dumitru
// Author Link: https://github.com/billx-x
// ##############################

int main() {

    unsigned int x, y, pow = 0;

    printf("Capetele intervalului: ");
    scanf("%u%u", &x, &y);

    while(1 << pow < x) pow++;

    while(1 << pow <= y){
        printf("%u este puterea lui 2 \n", 1 << pow);
        pow++;
    }
}