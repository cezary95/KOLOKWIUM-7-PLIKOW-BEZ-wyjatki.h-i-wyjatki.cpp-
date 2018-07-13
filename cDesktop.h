#pragma once
#include <string>
#include <iostream>
 
using namespace std;
 
enum MojeWyjatki {
	out_of_range,
};
 

class cDesktop :public cKomputer
{
private:
	double wysokoscObudowy;
 
public:
	cDesktop();
	cDesktop(string k, double c, int w);
	void Wypisz();
	double GetWysokoscObudowy();
	void SetWysokoscObudowy(double w);
	~cDesktop();
};
 