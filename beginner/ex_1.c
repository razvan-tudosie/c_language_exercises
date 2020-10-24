#include <stdio.h>

// ##############################
// Scrieți un program care să citească de la tastatură două numere întregi, două numere reale și două caractere, iar apoi se le afișeze astfel:
// a) toate pe un singur rând, în ordinea în care au fost citite;
// b) toate pe un singur rând, sub forma: un număr întreg, un număr real, un caracter, un număr întreg, un număr real, un caracter;
// c) fiecare pe câte un rând;
// d) câte două pe un rând.
// ##############################

int main() {
    // variable
    int num1, num2;
    float num_real1, num_real2;
    char char1, char2;

    // get char_1 and char_1 values from user
    printf("Introdu doua CARACTERE urmate de tasta 'Enter': \n");
    scanf("%c %c", &char1, &char2);

    // get num1 and num2 values from user
    printf("Introdu doua NUMERE INTREGI urmate de tasta 'Enter': \n");
    scanf("%d %d", &num1, &num2);

    // get num1 and num2 values from user
    printf("Introdu doua NUMERE REALE urmate de tasta 'Enter': \n");
    scanf("%f %f", &num_real1, &num_real2);

    // show results for a)
    printf("\n");
    printf("################################## \n");
    printf("------- Raspuns punctul A ------- \n");
    printf("################################## \n");
    printf("Rezultatul punctului a este: %c, %c, %d, %d, %.2f, %.2f \n", char1, char2, num1, num2, num_real1, num_real2 );

    // show results for b)
    printf("\n");
    printf("################################## \n");
    printf("------- Raspuns punctul B ------- \n");
    printf("################################## \n");
    printf("%d, %.0f, %c, %d, %.2f, %c \n", num1, num_real1, char1, num2, num_real2, char2);

    // show results for c)
    printf("\n");
    printf("################################## \n");
    printf("------- Raspuns punctul C ------- \n");
    printf("################################## \n");
    printf("Primul numar REAL INTREG este: %d \n", num1);
    printf("Al doilea numar REAL INTREG este: %d \n", num2);
    printf("Primul numar REAL este: %.2f \n", num_real1);
    printf("Al doilea numar REAL este: %.2f \n", num_real2);
    printf("Primul CARACTER este: %c \n", char1);
    printf("Al doilea CARACTER este: %c \n", char2);

    // show results for d)
    printf("\n");
    printf("################# \n");
    printf("------- Raspuns punctul D ------- \n");
    printf("################# \n");
    printf("Numerele tale REALE INTREGI sunt: '%d' si '%d' \n", num1, num2);
    printf("Numerele tale REALE sunt: '%.2f' si '%.2f' \n", num_real1, num_real2);
    printf("CARACTERELE tale sunt: '%c' si '%c' \n", char1, char2);


    return 0;
}