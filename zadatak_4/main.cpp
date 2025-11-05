/*Definirajte strukturu Student koja sadrži ime, JMBAG, godinu studija, broj položenih
ETCS bodova u godini i prosjek ocjena. Napišite funkciju za filtriranje studenata koja
prima niz studenata i dva pointera na funkciju, jedan za akciju koja æe se izvršiti, a
druga za uvjet filtriranja.
void filter_students(Student [], std::size_t,
void (*akcija)(Student&),
bool (*filter)(Student&));
Napišite funkcije za akcije, a lambda izraze za uvjete.
U main funkciji napravite niz studenata te pozovite funkciju za filtriranje za sljedeæe
zadatke:
· Ispis (akcija) svih studenata prve godine koji su položili barem jedan ispit (uvjet).
· Ispis (akcija) svih studenata koji imaju prosjek veæi od 3.5 (uvjet).
· Poveæanje broja godine studija (akcija) studenata koji su položili barem 45 ETCS
bodova (uvjet).*/

#include <iostream>
#include <string>
#include "funkcije.h"

int main() {
    Student studenti[] = {
        {"Ana", "001", 1, 10, 4.0},
        {"Marko", "002", 2, 50, 3.2},
        {"Iva", "003", 1, 0, 3.8},
        {"Petar", "004", 3, 60, 4.5}
    };
    std::size_t n = sizeof(studenti) / sizeof(Student);
    std::cout << "Studenti koji su položili barem jedan ispis na prvoj godini: " << std::endl;
    filtriraj(studenti, n, ispis, [](Student& s) {return s.godina_studija == 1 && s.ECTS > 0; });

    std::cout << std::endl;

    //Ispis (akcija) svih studenata koji imaju prosjek veæi od 3.5 (uvjet).
    std::cout << "Studenti koji imaju prosjek veæi od 3.5: " << std::endl;

    filtriraj(studenti, n,ispis, [](Student& s) {return s.prosjek > 3.5; });
    std::cout << std::endl;

    //Poveæanje broja godine studija (akcija) studenata koji su položili barem 45 ETCSbodova(uvjet).
    std::cout << "Studenti koji imaju najmanje 45 ECTS-a : " << std::endl;
    filtriraj(studenti, n, ispis, [](Student& s) {return s.ECTS >= 45; });

    std::cout << std::endl;
    return 0;
}