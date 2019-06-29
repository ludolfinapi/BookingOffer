#include "pch.h"
#include "Rezerwacja.h"
#include <fstream>
#include <cstdlib>
#include <string>


Rezerwacja::Rezerwacja()
{
}
	void Rezerwacja :: wczytaj()
	{
		fstream plik; //zmienna typu plik o nazwie plik
		plik.open("segment.txt", ios::in); //otwieramy plik "sciezka pliku" ,do odczytu
		//czy plik udalo sie otworzyc
		if (plik.good() == false)
		{
			cout << "NIe udalo sie otworzyc pliku! ";
			exit(0);
		}

		string linia;
		int nr_linii = (nr_rezerwacji - 1) * 4 + 1;
		int aktualny_nr = 1;


		while (getline(plik, linia))
		{
			if (aktualny_nr == nr_linii)
			{
				segment1 = linia;
				//  segment1.erase(40,18); //usuwa 18 znakow czyli wszystko do konca
				//  segment1.replace (25,3,"godz"); //zastepuje od 25znaku  3 znaki czyli ss1=godz


			}
			if (aktualny_nr == nr_linii + 1)
			{
				segment2 = linia;
				//  segment2.erase(40,18);
				//  segment2.replace (25,3,"godz");
			}
			if (aktualny_nr == nr_linii + 2)
			{
				segment3 = linia;
				// segment3.erase(40,18);
				// segment3.replace (25,3,"godz");
			}
			if (aktualny_nr == nr_linii + 3)
			{
				segment4 = linia;
				// segment4.erase(40,18);
				// segment4.replace (25,3,"godz");
			}
			aktualny_nr++;
		}
		plik.close();




	}
	void Rezerwacja::zmien() //usuwa wszystko po 40znaku
	{
		segment1.erase(40, 18); //usuwa 18 znakow czyli wszystko do konca
		segment2.erase(40, 18);
		segment3.erase(40, 18);
		segment4.erase(40, 18);

		segment1.replace(25, 3, "godz"); //zastepuje od 25 3 znaki czyli ss1=godz
		segment2.replace(25, 3, "godz");
		segment3.replace(25, 3, "godz");
		segment4.replace(25, 3, "godz");

	}

	void Rezerwacja::wyswietl()
	{
		cout << endl << "Rezerwacja po zmianach :" << endl;
		cout << "Nr rezerwacji :" << nr_rezerwacji << endl;
		cout << segment1 << endl;
		cout << segment2 << endl;
		cout << segment3 << endl;
		cout << segment4 << endl;
	}




Rezerwacja::~Rezerwacja()
{
}
