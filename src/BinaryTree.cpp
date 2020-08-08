#include <iostream>
using namespace std;
#include "BST.h"


int main() {
	cout << "Start Binary Tree ..." << endl;

	BST* tree = new BST();
	tree->insert(8);
	tree->insert(3);
	tree->insert(1);
	tree->insert(10);
	tree->insert(6);
	tree->insert(14);
	tree->insert(4);
	tree->insert(7);
	tree->insert(13);
	tree->insert(2);

	Node* node = tree->find(6);
	if (node) {
		cout << "Found " << node->value << endl;
	}

	node = tree->find(0);
	if (node) {
		cout << "Found " << node->value << endl;
	}


	cout << "In Order" << endl;
	tree->inOrder();

	delete tree;
	return 0;
}
