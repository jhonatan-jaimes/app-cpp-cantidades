/* 
Pseudocódigo / Plan detallado:
1. Incluir los encabezados necesarios (ya presentes).
2. Implementar las cuatro sobrecargas de CalcularService::medidas:
   a) medidas(double largo, double ancho, int cantidad, Areas& areas)
      - Tipo: "2D"
      - areaOne = largo * ancho
      - areaAll = areaOne * cantidad
   b) medidas(double largo, double ancho, double alto, int cantidad, Areas& areas)
      - Tipo: "3D"
      - areaOne = largo * ancho * alto (interpreto como volumen)
      - areaAll = areaOne * cantidad
   c) medidas(Medidas2D medidas, int cantidad, Areas& areas)
      - Extraer largo y ancho de 'medidas' mediante getLargo/getAncho
      - Reusar la lógica 2D: tipo "2D", calcular areaOne y areaAll
   d) medidas(Medidas3D medidas, int cantidad, Areas& areas)
      - Extraer largo, ancho y alto de 'medidas' mediante getLargo/getAncho/getAlto
      - Reusar la lógica 3D: tipo "3D", calcular areaOne y areaAll
3. Asignar valores a 'areas' usando los setters setTipo, setAreaOne, setAreaAll.
4. Mantener compatibilidad con C++14 y con las firmas de la interfaz.
*/

#include "CalcularService.h"
#include "Medidas2D.h"
#include "Medidas3D.h"
#include "Areas.h"

void CalcularService::medidas(double largo, double ancho, int cantidad, Areas &areas) {
	areas.setTipo("2D");
	double one = largo * ancho;
	areas.setAreaOne(one);
	areas.setAreaAll(one * cantidad);
}

void CalcularService::medidas(double largo, double ancho, double alto, int cantidad, Areas &areas) {
	areas.setTipo("3D");
	double one = largo * ancho * alto;
	areas.setAreaOne(one);
	areas.setAreaAll(one * cantidad);
}

void CalcularService::medidas(Medidas2D const &medidas, int cantidad, Areas &areas) {
	areas.setTipo("2D");
	double one = medidas.getLargo() * medidas.getAncho();
	areas.setAreaOne(one);
	areas.setAreaAll(one * cantidad);
}

void CalcularService::medidas(Medidas3D const &medidas, int cantidad, Areas &areas) {
	areas.setTipo("3D");
	double one = medidas.getLargo() * medidas.getAncho() * medidas.getAlto();
	areas.setAreaOne(one);
	areas.setAreaAll(one * cantidad);
}
