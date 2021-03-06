/*
 * Queue.cpp
 *
 Created on: 13 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include "Queue.hpp"

Queue::Queue() {
	double * array = new double[8192];
	size = 8192;
	entries = 0;
	front = 0;
	back = 0;
}

Queue::Queue(int n) {
	double * array = new double[n];
	size = n;
	entries = 0;
	front = 0;
	back = 0;
}

Queue::~Queue() {
	delete[] queue;
}

Queue::Queue(const Queue & q) { // copy constructor
   entries = q.entries; // copy the basic variables
   size = q.size;
   back = q.back;
   front = q.front;
   queue = new double[entries];

   for(int i=front;i<back;++i) {
      queue[i] = q.queue[i];
   }
}

double Queue::Pop() {
     double value = queue[front];
     entries--;
     front++;
     return value;
}

//Front will increase ad infinitum even if higher than array. Array will not show these extra values.

bool Queue::Push(double value) {
	 if (back >= size) {
		 return false;
	 }
	 else {
		 return true;
	   }
	 queue[back] = value;
	 entries++;
	 back++;
}



void Queue::relocate() {
   if( front > 0) {
     int j =0;
     for( int i =front;i<back;++i) {
      queue[j] = queue[i];
      ++j;
     }
     front = 0;
     back-=front;
   }
   //To prevent the front from exceeding the size of the array, the code shifts the queue back. It does this by assigning values to the difference and shifting back by it.
}


