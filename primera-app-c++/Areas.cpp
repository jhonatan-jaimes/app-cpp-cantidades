#include "Areas.h"

Areas::Areas() : Areas("", 0.0, 0.0) {}

Areas::Areas(string tipo, double areaOne, double areaAll) : tipo(tipo), areaAll(areaAll), areaOne(areaOne) {}

string Areas::getTipo() {
	return this->tipo;
}

double Areas::getAreaOne() {
	return this->areaOne;
}

double Areas::getAreaAll() {
	return this->areaAll;
}

void Areas::setTipo(string tipo) {
	this->tipo = tipo;
}

void Areas::setAreaOne(double areaOne) {
	this->areaOne = areaOne;
}

void Areas::setAreaAll(double areaAll) {
	this->areaAll = areaAll;
}
