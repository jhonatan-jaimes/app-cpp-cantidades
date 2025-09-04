#pragma once
class Medidas {
private:
	double largo;
	double ancho;
	double alto;

public:
	Medidas();
	Medidas(double largo, double ancho, double alto);
	double getLargo();
	double getAncho();
	double getAlto();
};

