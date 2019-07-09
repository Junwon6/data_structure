#pragma once

#include "Node.h"
#include <iostream>

using namespace std;

class List
{
private:
	Node* head;
	int size;
public:
	List(void);
	void pushBack(int);
	void popFront();
	void print();
};