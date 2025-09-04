#pragma once

#include <string>

using namespace std;

class Material
{
public:
	string material;
	double cemento;
	double arena;
	double grava;
	double agua;

private:
	Material();
	Material(string material, double cemento, double arena, double grava, double agua);
	string getMaterial();
	double getCemento();
	double getArena();
	double getGrava();
	double getAgua();
};

