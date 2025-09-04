#pragma once

#include <string>
#include "Medidas.h"
#include "Areas.h"
#include "Material.h"

using namespace std;

class Elemento
{
	string nameElemento;
	int canditadElemento;
	Medidas medidas;
	Areas areas;
	Material material;

};

