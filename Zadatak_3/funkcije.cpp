#include <iostream>
#include "funkcije.h"

void uredi_niz(int niz[], std::size_t velicina) {
	auto Paran = [](int a) {return a % 2== 0; };
	auto Pola = [](int a) {return a / 2; };
	auto Dvostruko = [](int a) {return a * 2; };

	for (std::size_t i = 0; i < velicina; ++i)
	{
		if (Paran(niz[i])) {
			niz[i] = Pola(niz[i]);
		}
		else {
			niz[i] = Dvostruko(niz[i]);

		}
	}
}

//funkcija koja raèuna sumu i produkt èlanova niza,

void racun(int niz[], std::size_t velicina, int&suma, int&produkt) {
	auto zbroj = [&suma](int a) {return suma += a; };
	auto pomnozi = [&produkt](int a) {return produkt *= a; };

	for (std::size_t i = 0; i < velicina; ++i)
		zbroj(niz[i]);
	for (std::size_t i = 0; i < velicina; ++i)
		pomnozi(niz[i]);
}
// funkcija koja raèuna sumu brojeva veæih od nekog praga.

int zbroj(int niz[], size_t velicina, int prag) {
	int zbr = 0;
	auto zbroji = [prag, &zbr](int a) {
		if (a > prag)
			zbr += a; };
	for (std::size_t i = 0; i < velicina; ++i)
		zbroji(niz[i]);
return zbr;
}