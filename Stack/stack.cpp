#include "stack.h"
#include <iostream>

using namespace std;

stack::stack()
{
	size == 0;
	top = nullptr;
}

void stack::pop()
{
	if (size != 0)
	{
		Node *temp = top;
		top = top->next;
		delete temp;
		size--;
	}
}

void stack::push(int value)
{
	Node *newNode = new Node(value);
	if (size == 0)
	{
		top = newNode;
		size++;
	}
	else
	{
		newNode->next = top;
		top = newNode;
		size++;
	}
}

void stack::print()
{
	Node *iter = top->next;
	cout << "***" << endl;
	cout << top->value << " <-- top" <<endl;
	while (iter->next != nullptr)
	{
		cout << iter->value << endl;
		iter = iter->next;
	}
	cout << "---" << endl;
}