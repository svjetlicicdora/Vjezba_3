#include <iostream>
#include "funkcije.h"


void sortt(int niz[], std::size_t size, bool (*cmp)(int, int)) {
	for (std::size_t i = 0; i < size - 1; i++) {
		for (std::size_t j = i + 1; j < size; ++j) {
			if (!cmp(niz[i], niz[j])) {
				int temp = niz[i];
				niz[i] = niz[j];
				niz[j] = temp;
			}
		}
	}
}

void ispis(int niz[], std::size_t size) {
	for (std::size_t i = 0; i < size; ++i) {
		std::cout << niz[i] << " ";
	}
	std::cout << std::endl;
}