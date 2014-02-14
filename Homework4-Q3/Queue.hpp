/*
 * Queue.hpp
 *
 *  Created on: 13 Feb 2014
 *      Author: Raj Shah 120695027
 */

#ifndef QUEUE_HPP_
#define QUEUE_HPP_

class Queue {
	public:
		Queue(); // default constructor
		Queue(int n);	// constructor with initialisation argument
		Queue(const Queue & queue); // copy constructor
		~Queue(); // destructor
		Queue & operator=(const Queue & queue); // asignment operator


		double Pop();
		bool Push(double value);
		void Flush();
		int Entries();

	private:
		void relocate();
		double * queue; // place to store values
		int front; // index to the front of the queue
		int back; // index to the next free location at the back of the queue
		int entries; // number of entries in the queue
		int size; // maximum number of values that can be stored in the queue
};

#endif /* QUEUE_HPP_ */
