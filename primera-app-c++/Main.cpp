#include <iostream>
#include "Medidas.h"

using namespace std;

int main() {
	Medidas medidas = Medidas(4, 5, 6);

	cout << medidas.getAlto() * medidas.getLargo() * medidas.getAncho() << endl;

}