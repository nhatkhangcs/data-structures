#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

struct BinaryTree {
	Node* root;
};

void NLRtreeTraversal(Node* temp) {
	if (temp != nullptr) {
		cout << temp->data << '\n';
		NLRtreeTraversal(temp->left);
		NLRtreeTraversal(temp->right);
	}
}

void LNRtreeTraversal(Node* temp) {
	if (temp != nullptr) {
		NLRtreeTraversal(temp->left);
		cout << temp->data << '\n';
		NLRtreeTraversal(temp->right);
	}
}

void LRNtreeTraversal(Node* temp) {
	if (temp != nullptr) {
		NLRtreeTraversal(temp->left);
		NLRtreeTraversal(temp->right);
		cout << temp->data << '\n';
	}
}

int main() {
	BinaryTree myTree;
	myTree.root = new Node;
	myTree.root->data = 5;
	myTree.root->left = new Node;
	myTree.root->left->data = 10;
	myTree.root->left->left = nullptr;
	myTree.root->left->right = nullptr;
	myTree.root->right = new Node;
	myTree.root->right->data = 15;
	myTree.root->right->left = new Node;
	myTree.root->right->right = new Node;
	myTree.root->right->left->data = 25;
	myTree.root->right->right->data = 50;
	myTree.root->right->left->left = nullptr;
	myTree.root->right->left->right = nullptr;
	myTree.root->right->right->left = nullptr;
	myTree.root->right->right->right = nullptr;

	cout << "Preorder-Traversal of Tree is: " << '\n';
	NLRtreeTraversal(myTree.root);
	cout << '\n';

	cout << "Inorder-Traversal of Tree is: " << '\n';
	LNRtreeTraversal(myTree.root);
	cout << '\n';

	cout << "Postorder-Traversal of Tree is: " << '\n';
	LRNtreeTraversal(myTree.root);

	return 0;
}
