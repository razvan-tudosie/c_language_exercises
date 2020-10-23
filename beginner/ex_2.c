#include <stdio.h>

// ##############################
// Se citesc două numere întregi de la tastatură. Să se afișeze cel mai mic și cel mai mare dintre ele folosind operatorul condițional.
// ##############################

int main() {

    // variablesclear
    int num1, num2;
    
    // get num1 and num2 values from user
    printf("Introdu doua NUMERE INTREGI urmate de tasta 'Enter': \n");
    scanf("%d %d", &num1, &num2);
    
    // condition
    if (num1 > num2)
    {
        printf("Cel mai MARE numar este: %d \n", num1);
        printf("Cel mai MIC numar este: %d \n", num2);
    } else {
        printf("Cel mai MARE numar este: %d \n", num2);
        printf("Cel mai MIC numar este: %d \n", num1);
    }
    


    return 0;
}