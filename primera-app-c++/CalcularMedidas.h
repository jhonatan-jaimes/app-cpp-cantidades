#pragma once
#include "Medidas2D.h"
#include "Medidas3D.h"
#include "Areas.h"

class CalcularMedidas
{
public:
	virtual void medidas(double largo, double ancho, int cantidad, Areas &areas) = 0;
	virtual void medidas(double largo, double ancho, double alto, int cantidad, Areas& areas) = 0;
	virtual void medidas(Medidas2D const &medidas, int cantidad, Areas& areas) = 0;
	virtual void medidas(Medidas3D const &medidas, int cantidad, Areas& areas) = 0;
};

