#include <stdio.h>

// ## The context ############################
// Gigel își dorește foarte mult să-și cumpere o jucărie care costă 𝑠 lei. Pentru a reuși cât
// mai repede acest lucru, el se hotărăște să depună în pușculița sa, în fiecare zi, câte o sumă
// de bani (număr natural nenul). Cunoscând sumele depuse de Gigel zilnic, afișați după câte zile Gigel
// reușește să strângă în pușculiță suma necesară, suma medie zilnică pe care acesta a depus-o în pușculiță,
// precum și suma care îi rămâne după ce își cumpără jucăria.
// ##############################
// ##############################
// Author: Andrei399
// ##############################

int main() {

    int s, bani, pusculita = 0,nrzile = 0;
    printf("Cat costa jucaria (S) ? = ");
    scanf("%d", &s);
    
    while (pusculita < s){
        nrzile++;
        printf("Cati bani depunde Gigel in ziua %d? \n", nrzile);
        scanf("%d", &bani);
        pusculita += bani;
    }
    
    printf("Lui Gigel i-a luat %d zile! \n", nrzile);
    printf("Gigel a pus %d bani in medie zilnic \n", s / nrzile);
    printf("Gigel a pus %d bani in plus la pusculita! \n", pusculita - s);


    return 0;
}