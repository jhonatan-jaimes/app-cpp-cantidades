#pragma once

#include <string>
#include "Medidas.h"
#include "Areas.h"
#include "Material.h"

using namespace std;

class Elemento
{
private:
	string nameElemento;
	int canditadElemento;
	Medidas medidas;
	Areas areas;
	Material material;

public:
	Elemento();
	Elemento(
		string nameElemento,
		int canditadElemento,
		Medidas medidas,
		Areas areas,
		Material material
	);
	string getNameElemento();
	int getCantidadElemento();
	Medidas getMedidas();
	Areas getAreas();
	Material getMaterial();
};

