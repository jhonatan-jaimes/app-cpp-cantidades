#include "Medidas.h"
Medidas::Medidas() {
	this->largo = 0.0;
	this->ancho = 0.0;
	this->alto = 0.0;
}

Medidas::Medidas(double largo, double ancho, double alto) {
	this->largo = largo;
	this->ancho = ancho;
	this->alto = alto;
}

double Medidas::getLargo() {
	return this->largo;
}

double Medidas::getAncho() {
	return this->ancho;
}

double Medidas::getAlto() {
	return this->alto;
}