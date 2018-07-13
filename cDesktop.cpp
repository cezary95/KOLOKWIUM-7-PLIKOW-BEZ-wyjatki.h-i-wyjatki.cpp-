#include "cDesktop.h"

cDesktop::cDesktop()
{
	cDesktop::nazwa = "";
	cDesktop::cena = 0;
	cDesktop::wiek = 0;
	cDesktop::wysokoscObudowy = 0;
}
 
cDesktop::cDesktop(string k, double c, int w) :cKomputer(k,c,w) {
	cDesktop::nazwa = k;
	cDesktop::cena = c;
	cDesktop::wiek = w;
}
 
void cDesktop::Wypisz() {
	cout << "\n Nazwa: " << cDesktop::nazwa;
	cout << "\n Cena : " << cDesktop::cena;
	cout << "\n Wiek : " << cDesktop::wiek;
	cout << "\n Wysokosc obudowy : " << cDesktop::wysokoscObudowy;
}
 
double cDesktop::GetWysokoscObudowy() {
	return cDesktop::wysokoscObudowy;
}
 
void cDesktop::SetWysokoscObudowy(double w) {
	cDesktop::wysokoscObudowy = w;
}
 
cDesktop::~cDesktop()
{
}