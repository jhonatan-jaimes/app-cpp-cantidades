#include "Medidas2D.h"

Medidas2D::Medidas2D(string tipo, double largo, double ancho) : Medidas(tipo), largo(largo), ancho(ancho) {}

Medidas2D::Medidas2D() : Medidas2D("", 0.0, 0.0) {}

double Medidas2D::getLargo() { return this->largo; }

double Medidas2D::getAncho() { return this->ancho; }

void Medidas2D::setLargo(double largo) { this->largo = largo; }

void Medidas2D::setAncho(double ancho) { this->ancho = ancho; }