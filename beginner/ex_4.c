#include <stdio.h>

// ##############################
// Scrieți un program care citește de la tastatură un număr natural reprezentând un an și
// verifică dacă anul respectiv este bisect sau nu. Un an este bisect fie dacă este divizibil
// cu 4 și nu este divizibil cu 100, fie este divizibil cu 400.
// ##############################

int main() {
   int year;

    // Get year from user
    printf("Introdu un numar intreg: \n");
    scanf("%d", &year);

    // identify if is a leap year or not
    if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0)) {
        printf("%d este an bisect", year);
    } else {
        printf("%d nu este an bisect", year);
    }

    return 0;
}