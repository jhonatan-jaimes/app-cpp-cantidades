#include "Elemento2D.h"

Elemento2D::Elemento2D(string nombre, string tipo, int cantidad, Areas areas, Medidas2D medidas) 
	: Elemento(nombre, tipo, cantidad, areas), medidas(medidas) {}

Elemento2D::Elemento2D() : Elemento2D("", "", 0, Areas(), Medidas2D()) {}

Medidas2D Elemento2D::getMedidas() {
	return this->medidas;
}

void Elemento2D::setMedidas(Medidas2D medidas) {
	this->medidas = medidas;
}

