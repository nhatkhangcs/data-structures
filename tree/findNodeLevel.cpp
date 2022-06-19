#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    struct Node* left, * right;
};

int printLevel(Node* root, int X)
{
    Node* node;
    if (root == NULL) return 0;
    queue<Node*> q;
    int currLevel = 1;
    q.push(root);
    while (q.empty() == false) {
        int size = q.size();
        while (size--) {
            node = q.front();
            if (node->data == X) return currLevel;
            q.pop();
            if (node->left != NULL) q.push(node->left);
            if (node->right != NULL) q.push(node->right);
        }
        currLevel++;
    }
    return 0;
}

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(7);
    root->right->right = newNode(6);

    cout << printLevel(root, 6);
    return 0;
}
