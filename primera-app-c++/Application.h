#pragma once
#include "CalcularService.h"
#include "Areas.h"

namespace App
{
	void run();
};

namespace Opt
{
	void elementoDos(CalcularService& calcular, Areas& areas);
	void elementoTres(CalcularService& calcular, Areas& areas);
	void printAreas(Areas& areas);
};


