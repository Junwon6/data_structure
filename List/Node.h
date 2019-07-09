#pragma once

class Node
{
	friend class List;
private:
	int value;
	Node *next;
public:
	Node(void) {}
	Node(int v) : value(v) {}
	~Node() {}
};