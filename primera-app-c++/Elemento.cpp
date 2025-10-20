#include "Elemento.h"

Elemento::Elemento(string nombre, string tipo, int cantidad, Areas areas) : nombre(nombre), tipo(tipo), cantidad(cantidad), areas(areas) {}

Elemento::Elemento() : Elemento("", "", 0, Areas()) {}

string Elemento::getNombre() {
	return this->nombre;
}

string Elemento::getTipo() {
	return this->tipo;
}

int Elemento::getCantidad() {
	return this->cantidad;
}

Areas Elemento::getAreas() {
	return this->areas;
}

void Elemento::setNombre(string nombre) {
	this->nombre = nombre;
}

void Elemento::setTipo(string tipo) {
	this->tipo = tipo;
}

void Elemento::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}

void Elemento::setAreas(Areas areas) {
	this->areas = areas;
}