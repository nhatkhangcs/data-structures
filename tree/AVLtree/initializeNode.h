//initialize
struct Node{
    int key;            //Data
    int count;          //Frequency of node
    int height;         //tree height
    Node* left;         //Left subtree
    Node* right;        //right subtree
};

typedef Node* ptrNode;

void Init(ptrNode& root){
    root = NULL;
}
