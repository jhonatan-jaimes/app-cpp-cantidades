#include "Application.h"
#include <iostream>

using namespace std;

namespace App {
	void run(bool& to_seguir) {
		do
		{
			char option;
			cout << "Hola quiere seguir" << endl;
			cout << "[ Y / n ]" << endl;
			cin >> option;
			if (option == 'n' || option == 'N') {
				to_seguir = false;
			}
		} while (to_seguir);
	}
}

