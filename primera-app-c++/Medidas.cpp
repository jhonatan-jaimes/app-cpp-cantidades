#include "Medidas.h"

Medidas::Medidas(string tipo) : tipo(tipo) {}

Medidas::Medidas() : Medidas("") {}

string Medidas::getTipo() const{ return this->tipo; }

void Medidas::setTipo(string tipo) { this->tipo = tipo; }

