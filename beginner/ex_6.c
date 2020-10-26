#include <stdio.h>

// ##############################
// Se citesc 3 numere naturale 𝑎,𝑏 și 𝑐. Verificați faptul că numerele respective pot reprezenta ore,
// minute și secunde, iar în caz afirmativ afișați cele 3 numere sub forma ℎℎ:𝑚𝑚:𝑠𝑠. Dacă valorile citite
// sunt incorecte, afișați un mesaj corespunzător.
// ##############################

int main() {
    int h = 0;
    int length = 3;
    int numbers[length];

    // Get users numbers
    for (int i = 0; i < length; i++)
    {
        printf("Introdu un numar natural: \n");
        scanf("%d", &numbers[i]);
    };


    for (int i = 0; i < length; i++)
    {
        // check if numbers are larger or equal with 0 & smaller or equal to 60
        if (numbers[i] >= 0 && numbers[i]<= 60) {
            printf("ヽ(´▽`)/  Numarul %d este bun \n", numbers[i]);

            // if the hours number is not already set (is 0)
            // AND if the hours number is not less then 0 - this means a number from the user is to large
            // set the fisrt number smaller than 24 to HOURS
            if (numbers[i] <= 24 && h == 0) {
                h = numbers[i];
            }
        } else {
            printf(" ¯ヽ_(⊙︿⊙)_/¯  Numarul %d nu poate fi introdus intr-o ora \n", numbers[i]);
            h = -1;
        }
    }

    if ( h == numbers[0]) {
        printf("Ora este: %d : %d : %d \n" , numbers[0], numbers[2],  numbers[1]);
        printf("- SAU - \n");
        printf("Ora este: %d : %d : %d \n" , numbers[0], numbers[1],  numbers[2]);

    } else if ( h == numbers[1]) {
        printf("Ora este: %d : %d : %d \n" , numbers[1], numbers[0],  numbers[2]);
        printf("- SAU - \n");
        printf("Ora este: %d : %d : %d \n" , numbers[1], numbers[2],  numbers[0]);

    } else if ( h == numbers[2]) {
        printf("Ora este: %d : %d : %d \n" , numbers[2], numbers[1],  numbers[0]);
        printf("- SAU - \n");
        printf("Ora este: %d : %d : %d \n" , numbers[2], numbers[0],  numbers[1]);
    };

    return 0;
}