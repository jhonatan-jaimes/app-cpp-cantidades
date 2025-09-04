#include "Material.h"

Material::Material() {
	this->material = "";
	this->cemento = 0.0;
	this->arena = 0.0;
	this->grava = 0.0;
	this->agua = 0.0;
}

Material::Material(string material, double cemento, double arena, double grava, double agua) {
	this->material = material;
	this->cemento = cemento;
	this->arena = arena;
	this->grava = grava;
	this->agua = agua;
}

string Material::getMaterial() {
	return this->material;
}

double Material::getCemento() {
	return this->cemento;
}

double Material::getArena() {
	return this->arena;
}

double Material::getGrava() {
	return this->grava;
}

double Material::getAgua() {
	return this->agua;
}
