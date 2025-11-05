#pragma once
/*Definirajte strukturu Student koja sadrži ime, JMBAG, godinu studija, broj položenih
ETCS bodova u godini i prosjek ocjena. 
U main funkciji napravite niz studenata te pozovite funkciju za filtriranje za sljedeæe
zadatke:
· Ispis (akcija) svih studenata prve godine koji su položili barem jedan ispit (uvjet).
· Ispis (akcija) svih studenata koji imaju prosjek veæi od 3.5 (uvjet).
· Poveæanje broja godine studija (akcija) studenata koji su položili barem 45 ETCS
bodova (uvjet).*/

#include <iostream>
#include <string>

struct Student {
	std::string ime;
	std:: string JMBAG;
	int godina_studija;
	int ECTS;
	double prosjek;
};

void filtriraj(Student niz[], std::size_t n, void(*akcija)(Student&), bool(*filter)(Student&));

void ispis(Student& s);

void poveæanje(Student& s);