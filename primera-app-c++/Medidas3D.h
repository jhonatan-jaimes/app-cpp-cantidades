#pragma once

#include "Medidas2D.h"

class Medidas3D : public Medidas2D
{
private:
	double alto;

public:
	Medidas3D();
	Medidas3D(string tipo, double largo, double ancho, double alto);
	double getAlto();
	void setAlto(double alto);
};

