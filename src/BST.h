#ifndef BST_H_
#define BST_H_

#include <iostream>


class Node {
public:
	Node(int val = 0) : value(val) { left = right = nullptr; }
	int value;
	Node* left;
	Node* right;
};


class BST {
public:
	BST();
	virtual ~BST();

public:
	void insert(int value);
	Node* find(int value);
	void inOrder();

private:
	Node* insert(Node* node, int value);
	Node* find(Node* node, int value);
	void inOrder(Node* node);
	void destroy(Node* node);

	Node* root;
};

#endif /* BST_H_ */
