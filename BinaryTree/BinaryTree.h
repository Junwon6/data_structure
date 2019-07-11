#include <cstddef>
#include <iostream>

using namespace std;

class BinaryTree {
	private:
		char data;
		BinaryTree* left;
		BinaryTree* right;
	public:
		BinaryTree();
		BinaryTree(char data);
		BinaryTree(char data, BinaryTree* left, BinaryTree* right);
		void insertLeft(BinaryTree* left);
		void insertRight(BinaryTree* right);
		void preorder(BinaryTree* current);
		void inorder(BinaryTree* current);
		void postorder(BinaryTree* current);
};
