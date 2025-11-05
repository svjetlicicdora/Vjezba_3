/*Napišite funkciju za filtriranje studenata koja
prima niz studenata i dva pointera na funkciju, jedan za akciju koja æe se izvršiti, a
druga za uvjet filtriranja.
void filter_students(Student [], std::size_t,
void (*akcija)(Student&),
bool (*filter)(Student&));
Napišite funkcije za akcije, a lambda izraze za uvjete.*/
#include <iostream>
#include "funkcije.h"

void filtriraj(Student niz[], std::size_t n, void(*akcija)(Student&), bool(*filter)(Student&)) {
	for (std::size_t i = 0; i < n; ++i) {
		if (filter(niz[i])) {
			akcija(niz[i]);
		}
	}
}

void ispis(Student& s) {
	std::cout << s.ime << " (" << s.JMBAG << "), godina: " << s.godina_studija << ", ECTS: " << s.ECTS << ", prosjek: " << s.prosjek << std::endl;
}

//Poveæanje broja godine studija (akcija) studenata koji su položili barem 45 ETCS bodova(uvjet).

void poveæanje(Student& s) {
	s.godina_studija++;
}