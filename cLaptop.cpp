#include "cLaptop.h"
cLaptop::cLaptop():cKomputer()
{
	cLaptop::masa = 0;
	cLaptop::czasBaterii = 0;
}
 
cLaptop::cLaptop(string n, double c, int w):cKomputer(n,c,w)
{
	cLaptop::masa = 0;
	cLaptop::czasBaterii = 0;
}
 
cLaptop::cLaptop(string n, double c, int w, double m, int czas):cKomputer(n,c,w) {
	cLaptop::masa = m;
	cLaptop::czasBaterii = czas;
}
 
 
 
cLaptop::~cLaptop()
{
}
 
