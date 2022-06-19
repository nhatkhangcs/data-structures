#include <iostream>
using namespace std;

struct Node;
typedef Node* ptrNode;

struct Node {
	int key;
	int count;
	ptrNode left;
	ptrNode right;
};

void Init(ptrNode& root) {
	root = nullptr;
}

bool isEmpty(ptrNode root){
	return root == NULL;
}

void Insert(ptrNode& p, int theKey) {
	if (p == nullptr) {
		p = new Node;
		p->key = theKey;
		p->count = 1;
		p->left = NULL;
		p->right = NULL;
	}

	else if (theKey < p->key) {
		Insert(p->left, theKey);
	}

	else if (theKey > p->key) {
		Insert(p->right, theKey);
	}

	else {
		p->count = p->count + 1;
	}
}

ptrNode Find(ptrNode p, int theKey) {
	bool found = false;
	while (p != nullptr && !found) {
		if (theKey < p->key) p = p->left;
		else if (theKey > p->key) p = p->right;
		else found = true;
	}

	return p;
}

void RemoveRightMostNode(ptrNode temp1, ptrNode temp2) {
	if (temp1->right != nullptr) RemoveRightMostNode(temp1->right, temp2);
	else {
		temp2->key = temp1->key;
		temp2->count = temp1->count;
		temp2 = temp1;
		temp1 = temp1->left;
	}
}

void Remove(ptrNode& p, int theKey, bool& error) {
	error = true;
	if (p != NULL) {
		if (theKey < p->key) {
			Remove(p->left, theKey, error);
		}

		else if (theKey > p->key) {
			Remove(p->right, theKey, error);
		}

		else {
			error = false;
			ptrNode q = p;
			if (p->left != NULL && p->right == NULL) p = NULL;
			else if (p->left == NULL && p->right != NULL) p = p->right;
			else RemoveRightMostNode(p->left, q);
			delete q;
		}
	}
}

void DisplayNode(ptrNode p) {
	cout << p->key << '\n';
 }

void NLR(ptrNode p, int n) {
	for (int i = 1; i <= n; i++) cout << ' ';
	if (p != NULL) {
		DisplayNode(p);
		NLR(p->left, n + 3);
		NLR(p->right, n + 3);
	}

	else cout << "0:0" << '\n';
}

void NLR(ptrNode root) {
	if (isEmpty(root)) cout << "The tree is empty. \n";
	else {
		cout << "The Binary Search Tree Traversal: \n";
		NLR(root, 0);
	}
}

void Create(ptrNode& p, int a[], int& i) {
	if (a[i] == 0) p = NULL;
	else {
		p = new Node;
		p->key = a[i];
		i++;
		Create(p->left, a, i);
		i++;
		Create(p->right, a, i);
	}
}

bool isBSTTree(ptrNode p, int& key, bool& firstTime) {
	bool isBST = true;
	if (p != nullptr) {
		isBST = isBSTTree(p->left, key, firstTime);
		if (isBST) {
			if (firstTime) firstTime = false;
			else if (key >= p->key) isBST = false;
			key = p->key;
		}
		if (isBST) isBST = isBSTTree(p->right, key, firstTime);
	}

	return isBST;
}

bool isBST(ptrNode p) {
	int key;
	bool firstTime = true;
	return isBSTTree(p, key, firstTime);
}

void ClearTree(ptrNode& p) {
	if (p != nullptr) {
		ClearTree(p->left);
		ClearTree(p->right);
		delete p;
		p = nullptr;
	}
}


int main() {
	ptrNode bstTree;
	Init(bstTree);
	cout << "Tree initialized!\n";

	int opt = 0;
	do {
		system("cls");
		cout << "Choose one of the followings: \n";
		cout << "1. Check if the tree is empty.\n";
		cout << "2. Add key into tree.\n";
		cout << "3. Take the key from tree.\n";
		cout << "4. Delete a key in tree.\n";
		cout << "5. Traverse tree NLR.\n";
		cout << "6. Check if the tree is truly BST.\n";
		cout << "7. Destroy the tree.\n";
		cout << "0. End program.\n";

		cin >> opt;

		switch (opt) {
		case 1: {
			if (isEmpty(bstTree)) cout << "The tree is empty.\n";
			else cout << "The tree is not empty.\n";
			system("pause");
			break;
		}

		case 2: {
			int theInfo;
			cout << "Input the key: ";
			cin >> theInfo;
			Insert(bstTree, theInfo);
			system("pause");
			break;
		}

		case 3: {
			int theKey;
			cout << "Input the key: ";
			cin >> theKey;
			ptrNode p = Find(bstTree, theKey);
			if (p != nullptr) cout << "Key found.\n";
			else {
				cout << "Key not found" << '\n';
			}
			system("pause");
			break;
		}

		case 4: {
			int theKey;
			cout << "Input the key: ";
			cin >> theKey;
			bool error;
			Remove(bstTree, theKey, error);
			if (error) cout << "No key to delete.\n";
			system("pause");
			break;
		}

		case 5: {
			if (isEmpty(bstTree)) cout << "The tree is empty.\n";
			else NLR(bstTree);
			system("pause");
			break;
		}

		case 6: {
			int a[] = { 2,1,0,0,4,3,0,0,0 };
			int i = 0;
			Create(bstTree, a, i);
			bool isTree = isBST(bstTree);
			if (isTree) cout << "The tree is in BST form.\n";
			else cout << "The tree is not in BST form.\n";
			system("pause");
			break;
		}

		case 7: {
			ClearTree(bstTree);
			break;
		}
		}
	} while (opt != 0);

	return 0;
}
