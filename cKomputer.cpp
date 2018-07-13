#include "cKomputer.h"

cKomputer::cKomputer()
{
	cKomputer::nazwa = "";
	cKomputer::wiek = 0;
	cKomputer::cena = 0;
}
 
cKomputer::cKomputer(string nazwa, int wiek, double cena)
{
	cKomputer::nazwa = nazwa;
	cKomputer::wiek = wiek;
	cKomputer::cena = cena;
}
 
void cKomputer::setNazwa(string k) {
	cKomputer::nazwa = k;
}
 
void cKomputer::setCena(double c) {
	if (c < 0 || c>100) throw MojeWyjatki::out_of_range;
	else cKomputer::cena = c;
}
 
void cKomputer::setWiek(int w) {
	cKomputer::wiek = w;
}
 
string cKomputer::GetNazwa() {
	return cKomputer::nazwa;
}
 
double cKomputer::GetCena() {
	return cKomputer::cena;
}
 
int cKomputer::GetWiek() {
	return cKomputer::wiek;
}
 
void cKomputer::Wypisz() {
	cout << "\n Nazwa: " << cKomputer::nazwa;
	cout << "\n Cena : " << cKomputer::cena;
	cout << "\n Wiek : " << cKomputer::wiek;
}
 
 
cKomputer::~cKomputer()
{
}