#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;
};

int main() {
    Node* root = NULL;
    //root = insert(root, 10);
    //root = insert(root, 20);
    //root = insert(root, 30);
    //root = insert(root, 40);
    //root = insert(root, 50);
    //root = insert(root, 25);
    cout << "Preorder traversal of the constructed AVL tree is: \n";
    preOrder(root);
    return 0;
}
