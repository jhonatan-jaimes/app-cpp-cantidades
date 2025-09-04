#include "Areas.h"

Areas::Areas() {
	this->areaOne = 0.0;
	this->areaAll = 0.0;
}

Areas::Areas(double areaOne, double areaAll) {
	this->areaOne = areaOne;
	this->areaAll = areaAll;
}

double Areas::getAreaOne() {
	return this->areaOne;
}

double Areas::getAreaAll() {
	return this->areaAll;
}
