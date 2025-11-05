
#pragma once
#include <cstddef>


/*Funkciju sort iz prvog zadatka napišite kao template funkciju. Testirajte za int i double
nizove.*/


template <typename T>
inline bool ascending(T a, T b) {
	return a < b;
}

template <typename T>
inline bool descending(T a, T b) {
	return a > b;
}


template<typename T>
void sortt(T niz[], std::size_t size, bool (*cmp)(T, T)) {
	for (std::size_t i = 0; i < size - 1; i++) {
		for (std::size_t j = i + 1; j < size; ++j) {
			if (!cmp(niz[i], niz[j])) {
				T temp = niz[i];
				niz[i] = niz[j];
				niz[j] = temp;
			}
		}
	}
}

template<typename T>
void ispis(T niz[], std::size_t size) {
	for (std::size_t i = 0; i < size; ++i) {
		std::cout << niz[i] << " ";
	}
	std::cout << std::endl;
}

