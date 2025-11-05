#pragma once
#include <cstddef> 

/*Definirajte funkciju sort sa prototipom
void sortt(int[], std::size_t, bool (*cmp)(int, int));
Definirajte inline funkcije ascending i descending za usporedbu dva elementa koje primaju dva int-a i vraæaju bool.
U main funkciji inicijalizirajte niz i pozovite funkciju sort prvo za uzlazno, a zatim za
silazno sortiranje.
Napomena: std::size_t je definiran u headeru #include <cstddef>.
*/

inline bool ascending(int a, int b) {
	return a < b;
}

inline bool descending(int a, int b) {
	return a > b;
}
void sortt(int niz[], std::size_t size, bool (*cmp)(int, int));
void ispis(int niz[], std::size_t size);

