#include "stack.h"

int main()
{
	stack* s = new stack();
	for (int i = 0; i < 10; i++)
	{
		s->push(i);
	}
	s->print();

	for (int i = 0; i < 5; i++)
	{
		s->pop();
	}
	s->print();
}