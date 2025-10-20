#include "Elemento3D.h"

Elemento3D::Elemento3D(string nombre, string tipo, int cantidad, Areas areas, Medidas3D medidas) 
	: Elemento(nombre, tipo, cantidad, areas), medidas(medidas) {}

Elemento3D::Elemento3D() : Elemento3D("", "", 0, Areas(), Medidas3D()) {}

Medidas3D Elemento3D::getMedidas() {
	return this->medidas;
}

void Elemento3D::setMedidas(Medidas3D medidas) {
	this->medidas = medidas;
}
