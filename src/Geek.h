/*
 * Geek.h
 *
 *  Created on: Apr 19, 2020
 *      Author: estevam
 */

#ifndef GEEK_H_
#define GEEK_H_
#include<string>
using namespace std;

class Geek {
public:
	Geek();
	virtual ~Geek();
	string name;
	void printId();
	void pointer();
	void printName(string name);
	void loop();
	void printTime();
};

#endif /* GEEK_H_ */
