/*
 * main.cpp
 *
 *  Created on: 12 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	double array1[1000]; // on the stack
	double * array2 = new double[1000]; // on the heap
	delete[] array2; // delete operator
}
