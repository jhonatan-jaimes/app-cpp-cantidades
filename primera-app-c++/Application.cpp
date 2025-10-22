#include "Application.h"
#include "Areas.h"
#include "CalcularService.h"
#include <iostream>

using namespace std;

namespace App 
{
	void run() 
	{
		bool to_seguir = true;
		while (to_seguir)
		{
			Areas areas = Areas();
			CalcularService calcular = CalcularService();
			char option;

			calcular.medidas(25.2, 36.2, 56, areas);

			cout << areas.getTipo() << endl;
			cout << areas.getAreaOne() << endl;
			cout << areas.getAreaAll() << endl;

			cout << "Hola quiere seguir" << endl;
			cout << "[ Y / n ]" << endl;
			cin >> option;
			if (option == 'n' || option == 'N') {
				to_seguir = false;
			}
		}
	}
}

