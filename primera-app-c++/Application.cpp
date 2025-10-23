#include "Application.h"
#include "Areas.h"
#include "CalcularService.h"
#include "Option.h"
#include <iostream>

using namespace std;

namespace App 
{
	void run() 
	{
		Areas areas = Areas();
		CalcularService calcular = CalcularService();

		bool to_seguir = true;

		while (to_seguir)
		{	
			cout << "--------------------------------" << endl;
			cout << "Ingrese una opcion: " << endl;
			cout << "1 - Elemento 2D" << endl;
			cout << "2 - Elemento 3D" << endl;
			cout << "3 - Salir" << endl;
			cout << "4 - Limpiar" << endl;
			cout << "--------------------------------" << endl;

			int option;

			cin >> option;

			if (option != OPTION_UNO && option != OPTION_DOS && option != OPTION_TRS && option != OPTION_CUA)
			{
				to_seguir = true;
			}

			if (option == OPTION_UNO)
			{
				Opt::elementoDos(calcular, areas);
			}
			else if (option == OPTION_DOS)
			{
				Opt::elementoTres(calcular, areas);
			}
			else if (option == OPTION_TRS)
			{
				to_seguir = false;
			}
			else if (option == OPTION_CUA)
			{
				system("cls");
			}

		}
	}
}

namespace Opt
{
	void elementoDos(CalcularService& calcular, Areas& areas)
	{
		double largo;
		double ancho;
		int cantidad;

		cout << "--------------------------------" << endl;
		cout << "Ingrese el largo del objeto: " << endl;
		cin >> largo;
		cout << "Ingrese el ancho del objeto: " << endl;
		cin >> ancho;
		cout << "Ingrese la cantidad de objetos: " << endl;
		cin >> cantidad;
		cout << "--------------------------------" << endl;

		calcular.medidas(largo, ancho, cantidad, areas);

		printAreas(areas);
	}

	void elementoTres(CalcularService& calcular, Areas& areas)
	{
		double largo;
		double ancho;
		double alto;
		int cantidad;

		cout << "--------------------------------" << endl;
		cout << "Ingrese el largo del objeto: " << endl;
		cin >> largo;
		cout << "Ingrese el ancho del objeto: " << endl;
		cin >> ancho;
		cout << "Ingrese el alto del objeto: " << endl;
		cin >> alto;
		cout << "Ingrese la cantidad de objetos: " << endl;
		cin >> cantidad;
		cout << "--------------------------------" << endl;

		calcular.medidas(largo, ancho, alto, cantidad, areas);

		printAreas(areas);
	}

	void printAreas(Areas& areas)
	{
		cout << areas.getTipo() << endl;
		cout << areas.getAreaOne() << endl;
		cout << areas.getAreaAll() << endl;
	}

};

