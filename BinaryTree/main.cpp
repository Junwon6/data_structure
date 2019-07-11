#include "BinaryTree.h"

int main(int argc, char** argv) {
	BinaryTree* t1 = new BinaryTree('A');
	BinaryTree* t2 = new BinaryTree('B');
	BinaryTree* t3 = new BinaryTree('C');
	BinaryTree* t4 = new BinaryTree('D',t1, t2);
	BinaryTree* t5 = new BinaryTree('E', t3, NULL);
	BinaryTree* t6 = new BinaryTree('F',t4, t5);
	
	t6->preorder(t6);
	
	return 0;
}
