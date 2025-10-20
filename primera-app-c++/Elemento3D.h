#pragma once

#include "Elemento.h"
#include "Medidas3D.h"

class Elemento3D : public Elemento
{
private:
	Medidas3D medidas;

public:
	Elemento3D();
	Elemento3D(string nombre, string tipo, int cantidad, Areas areas, Medidas3D medidas);
	Medidas3D getMedidas();
	void setMedidas(Medidas3D medidas);
};

