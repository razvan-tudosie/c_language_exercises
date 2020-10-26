#include <stdio.h>

// ##############################
// Scrieți un program care realizează interschimbarea valorilor a două variabile, folosind operatorul pe biți XOR.
// ##############################


int main() {
    int a, b;

    printf("Introdu doua numere: \n");
    scanf("%d %d", &a, &b);

    printf("Interschimbarea valorilor = %d \n", a^b);

    return 0;
}