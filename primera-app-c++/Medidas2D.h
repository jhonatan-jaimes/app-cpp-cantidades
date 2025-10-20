#pragma once

#include "Medidas.h"

class Medidas2D : public Medidas
{
private:
	double largo;
	double ancho;

public:
	Medidas2D();
	Medidas2D(string tipo, double largo, double ancho);
	double getLargo();
	double getAncho();
	void setLargo(double largo);
	void setAncho(double ancho);
};

