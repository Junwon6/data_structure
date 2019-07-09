#include "List.h"

List::List()
{
	size = 0;
	head = nullptr;
}

void List::pushBack(int value)
{
	Node *newNode = new Node(value);
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node *iter = head;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		iter->next = newNode;
	}
	size++;
}

void List::popFront()
{
	if (head != nullptr)
	{
		Node *temp = head;
		head = head->next;
		delete temp;
		size--;
	}
}

void List::print()
{
	Node *iter = head;
	while (iter != nullptr)
	{
		cout << iter->value << " ";
		iter = iter->next;
	}
	cout << endl;
}