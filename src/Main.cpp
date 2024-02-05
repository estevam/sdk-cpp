//============================================================================
// Name        : sdk-cpp.cpp
// Author      : Estevam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include "Geek.h"
#include "Singleton.h"
#include <list>
#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp> 
#include <unordered_map>
#include <served/served.hpp>
using namespace std;



// Defining Constants
#define LENGTH 10
#define WIDTH  5

/*/*
 * Geek.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: estevam
 */
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main() {
	  const int test = 10;

	  list <int> gqlist1, gqlist2;

	    for (int i = 0; i < 10; ++i){
			
	        gqlist1.push_back(i * 2);
	        gqlist2.push_front(i * 3);
	    }

	    cout << "\nList 1 (gqlist1) is : ";

	showlist(gqlist1);

	Geek geekObj;
	geekObj.pointer();
	geekObj.loop();
	geekObj.name = "Estevam";
	geekObj.printName("Estevam Meneses "); // @suppress("Invalid arguments")
	geekObj.printId();
	geekObj.printTime();
	boost::uuids::uuid uuid = boost::uuids::random_generator()();

cout << uuid;
	string h = "  \n Hello World " + 	geekObj.name;
	cout << h << endl; // Hello World!!!
	Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

	/* The addresses will be the same. */
    cout << "Call singleton class will print the same address:  \n ";
	std::cout << s << std::endl;
	std::cout << r << std::endl;

	unordered_map < int, string > hashmap;

	// REST
    served::multiplexer mux;
    mux.handle("/api/v1/greeting")
        .get([&](served::response &res, const served::request &req) {
            std::string name = req.query["name"];
            res.set_header("content-type", "application/json");
            res << "{ \"content\": \"Hello, " << ((name.length() > 0) ? name : "world") << "!\" }\n";
        });

    std::cout << "Try this example with:" << std::endl;
    std::cout << "  curl \"http://localhost:8123/api/v1/greeting?name=world\"" << std::endl;

    served::net::server server("127.0.0.1", "8123", mux);
    server.run(10);

    return (EXIT_SUCCESS);


	return 0;
}
