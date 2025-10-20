#pragma once

#include "Elemento.h"
#include <string>
#include "Medidas2D.h"

class Elemento2D : public Elemento
{
private:
	Medidas2D medidas;

public:
	Elemento2D();
	Elemento2D(string nombre, string tipo, int cantidad, Areas areas, Medidas2D medidas);
	Medidas2D getMedidas();
	void setMedidas(Medidas2D medidas);
};

