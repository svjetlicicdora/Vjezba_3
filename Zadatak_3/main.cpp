#include <iostream>
#include "funkcije.h"
/*. Napišite sljedeæe lambda izraze:
· za provjeru parnosti i neparnosti broja (lambde bez capture)
· za udvostruèiti i prepoloviti broj (lambde bez capture)
· za dodavanje broja u sumu (lambda sa capture [&])
· za dodavanje broja u produkt (lambda sa capture [&])
· za dodavanje broja u sumu ako je veæi od nekog praga (lambda sa capture [prag, &s])
Koristeæi gornje lambda izraze napišite funkcije koje za niz cijelih brojeva
· funkcija koja parne elemente prepolovi, a neparne udvostruèi,
· funkcija koja raèuna sumu i produkt èlanova niza,
· funkcija koja raèuna sumu brojeva veæih od nekog praga.
*/



int main() {
	auto jeParan = [](int a) { return a % 2 == 0; };
	int a = 7;
	int b = 4;
	if (jeParan(a))
		std::cout << a << " je paran broj" << std::endl;
	else
		std::cout << a << " je neparan broj" << std::endl;

	auto jeNeparan = [](int a) {return a % 2 != 0; };

	if (jeNeparan(b))
		std::cout << b << " je neparan broj" << std::endl;
	else
		std::cout << b << " je paran broj" << std::endl;

	std::cout << std::endl;


	// za udvostruèiti i prepoloviti broj (lambde bez capture)

	auto Udvostruèi = [](int a) {return a * 2; };
	auto Prepolovi = [](int a) {return a / 2; };

	auto a2=Udvostruèi(a);
	std::cout << "Udvostruèen broj " << a <<" iznosi "<<a2<< std::endl;
	auto ap=Prepolovi(a);
	std::cout << "Prepolovljen broj " << a << " iznosi "<<ap<< std::endl;
	std::cout << std::endl;

	// za dodavanje broja u produkt (lambda sa capture [&])

	int suma = 0;
	auto zbroji = [&](int a) {
		suma += a;
		};

	zbroji(a);
	zbroji(3);

	std::cout << "Ukupna suma je: " << suma << std::endl;
	std::cout << std::endl;

	//za dodavanje broja u produkt (lambda sa capture [&])

	int produkt = 1;
	auto pomnozi=[&](int a){
		produkt *= a;
	};

	pomnozi(a);
	pomnozi(2);

	std::cout << "Umnožak je: " << produkt << std::endl;
	std::cout << std::endl;


	//za dodavanje broja u sumu ako je veæi od nekog praga (lambda sa capture [prag, &s])

	int prag = 5;
	int s = 0;
	auto dodaj = [prag, &s](int broj) {

		if (broj > prag) {
			s += broj;
		}
		};

	dodaj(3);
	std::cout << "Suma je: " << s << std::endl;
	dodaj(7);
	std::cout << "Suma je: " << s << std::endl;
	dodaj(10);
	std::cout << "Suma je: " << s << std::endl;
	std::cout << std::endl;

	//funkcija koja parne elemente prepolovi, a neparne udvostruèi,


	int niz[] = { 10,23,4,5,6,7,8,9 };
	std::size_t velicina = sizeof(niz) / sizeof(niz[0]);

	std::cout << "Originalni niz: " << std::endl;
	for (std::size_t i = 0; i < velicina; ++i)
		std::cout << niz[i] << " ";
	std::cout << std::endl;

	uredi_niz(niz, velicina);
	std::cout << "Ureðeni niz: " << std::endl;
	for (std::size_t i = 0; i < velicina; ++i)
		std::cout << niz[i] << " ";
	std::cout << std::endl;

	//funkcija koja raèuna sumu i produkt èlanova niza,
	std::cout << std::endl;
	int suma2 = 0;
	int produkt2 = 1;
	racun(niz, velicina, suma2, produkt2);
	std::cout << "suma je: " << suma2 << ", a produkt je: " << produkt2 << std::endl;
	std::cout << std::endl;

	// funkcija koja raèuna sumu brojeva veæih od nekog praga.

	int niz3[] = { 2, 5, 8, 3, 10, 7 };
	std::size_t velicina3 = sizeof(niz3) / sizeof(niz3[0]);
	int prag2 = 5;

	int rezultat = zbroj(niz3, velicina3, prag2);

	std::cout << "Suma brojeva veæih od " << prag << " je: " << rezultat << std::endl;

	return 0;
}

