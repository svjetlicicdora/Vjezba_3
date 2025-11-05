#include <iostream>
#include "funkcije.h"

int main() {
	int niz[] = { 5,2,9,1,7 };
	std::size_t velicina = sizeof(niz) / sizeof(niz[0]);

	std::cout << "Originalni niz: ";
	ispis(niz, velicina);

	sortt(niz, velicina, ascending);
	std::cout << "Uzlazno soptirano: ";
	ispis(niz, velicina);

	sortt(niz, velicina, descending);
	std::cout << " sortirano silazno: ";
	ispis(niz, velicina);

	return 0;

}