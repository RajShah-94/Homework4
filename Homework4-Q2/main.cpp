/*
 * main.cpp
 *
 *  Created on: 12 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream> //wasn't there
#include <string>

int main() {
	std::string *strPtr = new std::string/*forgot std*/("hello"/* 'hello" */);
	std::cout << *strPtr << std::endl; // & should be *
	std::cout << *strPtr << std::endl; // swapped
	delete/*[] &  no & */ strPtr;

}
