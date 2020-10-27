#include <stdio.h>

// ## The context ############################
// Se citesc două numere întregi 𝑎 și 𝑏. Scrieți un program care calculează 𝑎𝑏.
// ##############################
// ##############################
// Author: Vlad Dumitru
// Author Link: https://github.com/billx-x
// ##############################

int main() {

    int ba, po, pn = 0; // acum am realizat că pow e functie și pot apărea confuzii

    printf("Baza si puterea : ");
    scanf("%d%d", &ba, &po);

    printf("Rezultatul este : ");
    if(!ba){ printf("0"); return 0; }

    if(!po){ printf("1"); return 0; }

    if(po < 0){ pn = 1; po = -po; }

    int sol = 1;

    while(po--) sol *= ba;
    
    if(sol < 0){ printf("-"); sol = -sol; } // ca să arate frumos "-1/număr" și nu "1/-număr" :v
   
    if(pn) printf("1/"); 
    
    printf("%u \n", sol); // avem garanția că orice număr a ajuns aici e unsigned
    return 0;

}