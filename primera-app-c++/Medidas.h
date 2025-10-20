#pragma once

#include <iostream>

using namespace std;

class Medidas {
private:
	string tipo;

public:
	Medidas();
	Medidas(string tipo);
	string getTipo();
	void setTipo(string tipo);
};

