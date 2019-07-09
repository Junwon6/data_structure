#include "List.h"

int main()
{
	List *l = new List();
	l->pushBack(3);
	l->pushBack(4);
	l->pushBack(5);
	l->print();

	l->popFront();
	l->print();
}