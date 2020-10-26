#include <stdio.h>

// ##############################
// Scrieți un program care verifică paritatea unui număr natural citit de la tastatură, folosind operatori pe biți.
// ##############################

int main() {
    int number;

    printf("Introdu un numar natural: \n");
    scanf("%d", &number);

    // True if number is perfectly divisible by 2
    if(number % 2 == 0) {
        printf("%d este par \n", number);
    } else {
        printf("%d este impar \n", number);
    }
    return 0;
}