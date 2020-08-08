#include "BST.h"

BST::BST() {
	root = nullptr;
}

BST::~BST() {
	destroy(root);
	root = nullptr;
}

void BST::insert(int value) {
	root = insert(root, value);
}

Node* BST::insert(Node* node, int value) {

	if (node == nullptr) {
		return new Node(value);
	}

	if (value < node->value) {
		node->left = insert(node->left, value);
	}
	else if (value > node->value) {
		node->right = insert(node->right, value);
	}
	return node;
}

Node* BST::find(int value) {
	return find(root, value);
}

Node* BST::find(Node* node, int value) {
	if (node == nullptr) {
		return nullptr;
	}
	if (value < node->value) {
		return find(node->left, value);
	}
	else if (value > node->value) {
		return find(node->right, value);
	}
	return node; // found match!
}

void BST::inOrder() {
	inOrder(root);
}

void BST::inOrder(Node *node) {
	if (node != nullptr) {
		inOrder(node->left);
		std::cout << node->value << " ";
		inOrder(node->right);
	}
}

void BST::destroy(Node *node) {
	if (node != nullptr) {
		destroy(node->left);
		destroy(node->right);
		std::cout << "\n   Deleting " << node->value;
		delete node;
	}
}
