#pragma once
#include <string>

using namespace std;

class Areas
{
private:
	string tipo;
	double areaOne;
	double areaAll;

public:
	Areas();
	Areas(string tipo, double areaOne, double areaAll);
	string getTipo();
	double getAreaOne();
	double getAreaAll();
	void setTipo(string tipo);
	void setAreaOne(double areaOne);
	void setAreaAll(double areaAll);
};

