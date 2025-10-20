#include "Medidas3D.h"

Medidas3D::Medidas3D(string tipo, double largo, double ancho, double alto) : Medidas2D(tipo, largo, ancho), alto(alto) {}

Medidas3D::Medidas3D() : Medidas3D("", 0.0, 0.0, 0.0) {}

double Medidas3D::getAlto() { return alto; }

void Medidas3D::setAlto(double alto) { this->alto = alto; }
