#pragma once

#include <string>
#include "Areas.h"


using namespace std;

class Elemento
{
private:
	string nombre;
	string tipo;
	int cantidad;
	Areas areas;

public:
	Elemento();
	Elemento(string nombre, string tipo, int cantidad, Areas areas);
	string getNombre();
	string getTipo();
	int getCantidad();
	Areas getAreas();
	void setNombre(string nombre);
	void setTipo(string tipo);
	void setCantidad(int cantidad);
	void setAreas(Areas areas);
};

