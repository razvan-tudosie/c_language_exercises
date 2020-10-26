#include <stdio.h>

// ##############################
// Scrieți un program care stabilește dacă un număr real x aparține intervalului [𝑎;𝑏).
// Cele 3 valori 𝑎,𝑏 și 𝑥 se citesc de la tastatură.
// ##############################

int main() {
   int a, b, x;

    // Get numbers
    printf("Introdu DOUA numere reale: \n");
    scanf("%d %d", &a, &b);

    // check which number of the two is bigger
    if (a >= b) {
        printf("%d este mai mare ca %d \n", a, b);
        // Get numbers
        printf("Introdu UN numer real intre %d si %d: \n", b, a);
        scanf("%d", &x);
    } else {
        printf("%d este mai mare ca %d \n", b, a);
        // Get numbers
        printf("Introdu UN numer real intre %d si %d: \n", a, b);
        scanf("%d", &x);
    }

    if (x >= a && x <= b) {
        printf("Numarul %d apartine intervalului %d si %d  \n", x, a, b);
    } else {
        printf("Numarul %d NU APARTINE intervalului %d si %d  \n", x, a, b);
    }

    return 0;
}