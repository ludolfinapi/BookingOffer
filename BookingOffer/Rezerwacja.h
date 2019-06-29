#pragma once
#include<iostream>
using namespace std;

class Rezerwacja
{
public:
	Rezerwacja();
	~Rezerwacja();
	
	   int nr_rezerwacji; 
	   string  segment1, segment2, segment3, segment4; // segmenty
	   

		void wczytaj(); //wczytuje segmenty z pliku
		void zmien();// zmienia segmenty
		void wyswietl(); // pokazuje rezerwacje



};

