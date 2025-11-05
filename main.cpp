#include <iostream>
#include "funkcije.h"

int main() {
	int niz1[] = { 1,2,3,4,5,6 };
	double niz2[] = { 1.0,2.6,3.5,0.5,8.5,2.5 };
	char niz3[] = { 'a','g','r','w','a','m','b'};

	std::size_t velicina1 = sizeof(niz1) / sizeof(niz1[0]);
	std::size_t velicina2 = sizeof(niz2) / sizeof(niz2[0]);
	std::size_t velicina3 = sizeof(niz3) / sizeof(niz3[0]);

	std::cout << "Originalni prvi niz: ";
	ispis(niz1, velicina1);

	sortt(niz1, velicina1, ascending);
	std::cout << "Uzlazno soptiran niz1: ";
	ispis(niz1, velicina1);

	sortt(niz1, velicina1, descending);
	std::cout << " niz1 sortiran silazno: ";
	ispis(niz1, velicina1);

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Originalni drugi niz: ";
	ispis(niz2, velicina2);

	sortt(niz2, velicina2, ascending);
	std::cout << "Uzlazno soptiran niz2: ";
	ispis(niz2, velicina2);

	sortt(niz2, velicina2, descending);
	std::cout << " niz2 sortiran silazno: ";
	ispis(niz2, velicina2);

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Originalni treæi niz: ";
	ispis(niz3, velicina3);

	sortt(niz3, velicina3, ascending);
	std::cout << "Uzlazno soptiran niz3: ";
	ispis(niz3, velicina3);

	sortt(niz3, velicina3, descending);
	std::cout << " niz3 sortiran silazno: ";
	ispis(niz3, velicina3);

	std::cout << std::endl;
	
	return 0;
	
}