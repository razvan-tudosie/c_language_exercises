#include <stdio.h>

// ## The context ############################
// Într-o anumită zi a săptămânii, toți cei 𝑛 studenți ai Facultății de Informatică sunt prezenți
// la cursuri, însă fiecare într-un anumit interval orar de forma [𝑎,𝑏], unde 𝑎,𝑏∈ℕ și 𝑎<𝑏. Decanul Facultății
// dorește să convoace o ședință la care să participe toți studenții. Pentru a-l ajuta, scrieți un program care
// să determine intervalul orar din ziua respectivă în care sunt prezenți în Facultate toți studenții.
// ##############################
// ##############################
// Author: товарищ билл
// ##############################

int main() {

    unsigned int st, in, sf;
    printf("Numarul de studenti: ");
    scanf("%u", &st);
    printf("Intervalele orare:\n");
    scanf("%u%u", &in, &sf);
    unsigned int sol_in = in, sol_sf = sf; // inițializare optimă
    st--;
    while(st--){
        scanf("%u%u", &in, &sf);
        if(in > sol_in){
            sol_in = in;
        }
        if(sf < sol_sf){
            sol_sf = sf;
        }
    }
    printf("Decanul poate convoca o sedinta in intervalul orar %u-%u. \n", sol_in, sol_sf);
    return 0;
}