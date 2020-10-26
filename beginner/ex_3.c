#include <stdio.h>

// ##############################
// Se citesc 3 numere întregi diferite de la tastatură. Să se afișeze cele 3 numere în ordine crescătoare.
// ##############################

int main() {

    int length = 3;
    int numbers[length];
    int temp = 0;
    
    // Get users numbers
    for (int i = 0; i < length; i++)
    {
        printf("Introdu un numar intreg: \n");
        scanf("%d", &numbers[i]);
    };
    
    // Print users numbers
    printf("NUMERELE TALE SUNT: \n");
    for(int i = 0; i < 3; i++) {
        printf("%d \n", numbers[i]);
    }

    // Sort the array in ascending order    
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(numbers[i] > numbers[j]) {
               temp = numbers[i];    
               numbers[i] = numbers[j];    
               numbers[j] = temp;    
           }     
        }     
    }

    // Print elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {
        printf("%d  \n", numbers[i]);    
    } 

    return 0;
    
}