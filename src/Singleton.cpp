/*
 * Singleton.cpp
 *
 *  Created on: Jan. 28, 2024
 *      Author: estevammeneses
 */

#include "Singleton.h"
#include <iostream>

Singleton *Singleton::instance = 0;

Singleton* Singleton::getInstance() {
	if (instance == 0) {
		instance = new Singleton();
	}

	return instance;
}

Singleton::Singleton() {
}
