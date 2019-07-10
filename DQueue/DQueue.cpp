#include "DQueue.h"

DQueue::DQueue() {
	front = NULL;
	rear = NULL;
}

bool DQueue::isEmpty() {
	return (front == NULL);
}

void DQueue::insertFront(char item) {
	DQNode* newNode = new DQNode(item);
	if (isEmpty()) {
		front = newNode;
		rear = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
	}
	else {
		front->llink = newNode;
		newNode->rlink = front;
		newNode->llink = NULL;
		front = newNode;
	}
	cout<< "Front Inserted Item : " << item << endl;
}

void DQueue::insertRear(char item) {
	DQNode* newNode = new DQNode(item);
	if (isEmpty()) {
		front = newNode;
		rear = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
	}
	else {
		rear->rlink = newNode;
		newNode->llink = rear;
		newNode->rlink = NULL;
		rear = newNode;
	}
	cout << "Rear Inserted Item : " << item << endl;
}

char DQueue::deleteFront() {
	if (isEmpty()) {
		cout << "Front Deleting fail! DQueue is empty!!" << endl;
		return 0;
	}
	else {
		char item = front->data;
		if (front->rlink == NULL) {
			front = NULL;
			rear = NULL;
		}
		else {
			front = front->rlink;
			front->llink = NULL;
		}
		return item;
	}
}

char DQueue::deleteRear() {
	if (isEmpty()) {
		cout << "Rear Deleting fail! DQueue is empty!!" << endl;
		return 0;
	}
	else {
		char item = rear->data;
		if (rear->llink == NULL) {
			front = NULL;
			rear = NULL;
		}
		else {
			rear = rear->llink;
			rear->rlink = NULL;
		}
		return item;
	}
}

void DQueue::removeFront() {
	if (isEmpty()) {
		cout << "Front removing fail! DQueue is empty!!" << endl;
	}
	else {
		if (front->rlink == NULL) {
			front = NULL;
			rear = NULL;
		}
		else {
			front = front->rlink;
			front->llink = NULL;
		}
	}
}

void DQueue::removeRear() {
	if (isEmpty()) {
		cout << "Rear removing fail! DQueue is empty!!" << endl;
	}
	else {
		if (rear->llink == NULL) {
			front = NULL;
			rear = NULL;
		}
		else {
			rear = rear->llink;
			rear->rlink = NULL;
		}
	}
}

char DQueue::peekFront() {
	if (isEmpty()) {
		cout << "Front peeking fail! DQueue is empty!!" << endl;
		return 0;
	}
	else {
		return front->data;
	}
}

char DQueue::peekRear() {
	if (isEmpty()) {
		cout << "Rear peeking fail! DQueue is empty!!" << endl;
		return 0;
	}
	else {
		return rear->data;
	}
}

void DQueue::printDQueue() {
	if (isEmpty()) {
		cout << "DQueue is empty!!" << endl;
	}
	else {
		DQNode* iter = front;
		cout << "DQueue>> ";
		while (iter != NULL) {
			cout << iter->data << " ";
			iter = iter->rlink;
		}
		cout << endl << endl;
	}
}
