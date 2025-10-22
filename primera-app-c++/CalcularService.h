#pragma once
#include "CalcularMedidas.h"
#include "Areas.h"
#include "Medidas2D.h"
#include "Medidas3D.h"

class CalcularService : public CalcularMedidas
{
public:
	void medidas(double largo, double ancho, int cantidad, Areas &areas) override;
	void medidas(double largo, double ancho, double alto, int cantidad, Areas &areas) override;
	void medidas(Medidas2D const &medidas, int cantidad, Areas& areas) override;
	void medidas(Medidas3D const &medidas, int cantidad, Areas& areas) override;
};

