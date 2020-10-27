#include <stdio.h>

// ## The context ############################
// Un meșter trebuie să paveze întreaga pardoseală a unei bucătării de formă dreptunghiulară,
// de dimensiune 𝐿1×𝐿2 centimetri, cu plăci de gresie pătrate, toate cu aceeași dimensiune.
// Știind că meșterul nu vrea să taie nici o placă de gresie și vrea să folosească un număr minim
// de plăci, să se determine dimensiunea plăcilor de gresie de care are nevoie, precum și numărul lor.
// ##############################
// ##############################
// Author: Vlad Dumitru
// Author Link: https://github.com/billx-x
// ##############################

int main() {

    unsigned int L1, L2;

    printf("Dimensiunile pardoselii (lungime si latime) : ");
    scanf("%u%u", &L1, &L2);

    unsigned int iL1 = L1, iL2 = L2;
    while (L1 != L2){
        if(L1 > L2){
            L1 -= L2;
        }
        else{
            L2 -= L1;
        }
    }
    printf("Mesterul are nevoie de %u placi de dimensiune %u pe %u.", (iL1 * iL2)/(L1 * L2), L1, L2); //unde L1 și L2 în punctul ăsta sunt același lucru deci nu prea contează cum sunt puse.
    return 0;
}