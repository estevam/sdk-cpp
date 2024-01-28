/*
 * Geek.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: estevam
 */
#include <iostream>
#include<string>
#include "Geek.h"

using namespace std;

class Geeks {
public:
    string name;
    void printId();
    void pointer();
    void printName();
    void printName(string name);
};
Geek::Geek() {
    // TODO Auto-generated constructor stub
}

Geek::~Geek() {
    // TODO Auto-generated destructor stub
}

void Geek::printId() {
    cout << "My id: 2000" << endl;
}

void Geek::pointer() {
    int var = 20;
    int *ptr;
    ptr = &var;
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}
/**
 * Print name
 */
void Geek::printName(string name) {
    cout << "Geek name is:" << name;
}
/**
 *
 */
#define LIMIT 5 // macro definition

void Geek::loop() {
    for (int i = 0; i < LIMIT; i++) {
        std::cout << i << "\n";
    }
}


void Geek::printTime(){
	   cout << "------------------------- Time" << endl;
	   // current date/time based on current system
	   time_t now = time(0);

	   // convert now to string form
	   char* dt = ctime(&now);

	   cout << "The local date and time is: " << dt << endl;

	   // convert now to tm struct for UTC
	   tm *gmtm = gmtime(&now);
	   dt = asctime(gmtm);
	   cout << "The UTC date and time is:"<< dt << endl;



	   tm *ltm = localtime(&now);

	   // print various components of tm structure.
	   cout << "Year:" << 1900 + ltm->tm_year<<endl;
	   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
	   cout << "Day: "<< ltm->tm_mday << endl;
	   cout << "Time: "<< 5+ltm->tm_hour << ":";
	   cout << 30+ltm->tm_min << ":";
	   cout << ltm->tm_sec << endl;
	   cout << "------------------------- Time End" << endl;
}
