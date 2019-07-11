#include "BinaryTree.h"

BinaryTree::BinaryTree() {
	this->data = 0;
	this->left = NULL;
	this->right = NULL;
}

BinaryTree::BinaryTree(char data) {
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}

BinaryTree::BinaryTree(char data, BinaryTree* left, BinaryTree* right) {
	this->data = data;
	this->left = left;
	this->right = right;
}

void BinaryTree::insertLeft(BinaryTree* left) {
	this->left = left;
}

void BinaryTree::insertRight(BinaryTree* right) {
	this->right = right;
}

void BinaryTree::preorder(BinaryTree* current) {
	if (current != NULL) {
		cout << current->data << " ";
		preorder(current->left);
		preorder(current->right);
	}
}

void BinaryTree::inorder(BinaryTree* current) {
	if (current != NULL) {
		inorder(current->left);
		cout << current->data << " ";
		inorder(current->right);
	}
}

void BinaryTree::postorder(BinaryTree* current) {
	if (current != NULL) {
		postorder(current->left);
		postorder(current->right);
		cout << current->data << " ";
	}
}
