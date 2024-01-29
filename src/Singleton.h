/*
 * Singleton.h
 *
 *  Created on: Jan. 28, 2024
 *      Author: Estevam
 */
#ifndef SINGLETON_H_
#define SINGLETON_H_
#include <iostream>

class Singleton {
private:
	static Singleton *instance;
	Singleton(); // default constructor

public:
	static Singleton* getInstance();
	void test();
};

#endif /* SINGLETON_H_ */
