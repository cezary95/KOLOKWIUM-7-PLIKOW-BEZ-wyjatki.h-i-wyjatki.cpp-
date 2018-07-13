#pragma once
#include <string>
#include <iostream>
 
using namespace std;
 
enum MojeWyjatki {
	out_of_range,
};
 

class cLaptop :public cKomputer {
	double masa;
	int czasBaterii;
public:
	cLaptop();
	cLaptop(string k, double c, int w);
	cLaptop(string k, double c, int w, double m, int czas);
	~cLaptop();
};
 