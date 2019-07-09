#pragma

#include "Node.h"

class stack
{
private:
	Node *top;
	int size;
public:
	stack();
	void pop();
	void push(int);
	void print();
};