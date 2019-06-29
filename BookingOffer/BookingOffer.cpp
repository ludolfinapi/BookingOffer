// BookingOffer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Rezerwacja.h"
#include <iostream>

int main()
{
    Rezerwacja r1, r2;

	
	r1.nr_rezerwacji = 1;
	r1.wczytaj();
	r1.zmien();
	r1.wyswietl();


	r2.nr_rezerwacji = 2;
	r2.wczytaj();
	r2.zmien();
	r2.wyswietl();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
