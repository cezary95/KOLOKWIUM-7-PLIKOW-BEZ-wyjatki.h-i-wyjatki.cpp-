#pragma once
#include <string>
#include <iostream>
 
using namespace std;
 
enum MojeWyjatki {
	out_of_range,
};
 
class cKomputer
{
 
public:
	string nazwa;
	int wiek;
	double cena;
 
	cKomputer();
	cKomputer(string nazwa, int wiek, double cena);
	void setNazwa(string k);
	void setCena(double c);
	void setWiek(int w);
	string GetNazwa();
	double GetCena();
	int GetWiek();
	void Wypisz();
	~cKomputer();
};
 
