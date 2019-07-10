#include "DQNode.h"
#include <iostream>

using namespace std;

class DQueue {
	private:
		DQNode* front;
		DQNode* rear;
	public:
		DQueue();
		bool isEmpty();
		void insertFront(char item);
		void insertRear(char item);
		char deleteFront();
		char deleteRear();
		void removeFront();
		void removeRear();
		char peekFront();
		char peekRear();
		void printDQueue();
};
