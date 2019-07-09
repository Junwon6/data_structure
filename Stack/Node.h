#pragma

class Node
{
	friend class stack;
private:
	int value;
	Node *next;
	Node(void) {}
	Node(int v) : value(v) {}
	Node(int v, Node *n) : value(v), next(n) {}
};