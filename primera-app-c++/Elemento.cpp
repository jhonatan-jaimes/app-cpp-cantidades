#include "Elemento.h"

Elemento::Elemento() {
	this->nameElemento = "";
	this->canditadElemento = 0;
	this->medidas = Medidas();
	this->areas = Areas();
	this->material = Material();
}

Elemento::Elemento(string nameElemento, int canditadElemento, Medidas medidas, Areas areas, Material material) {
	this->nameElemento = nameElemento;
	this->canditadElemento = canditadElemento;
	this->medidas = medidas;
	this->areas = areas;
	this->material = material;
}

string Elemento::getNameElemento() {
	return this->nameElemento;
}

int Elemento::getCantidadElemento() {
	return this->canditadElemento;
}

Medidas Elemento::getMedidas() {
	return this->medidas;
}
Areas Elemento::getAreas() {
	return this->areas;
}
Material Elemento::getMaterial() {
	return this->material;
}