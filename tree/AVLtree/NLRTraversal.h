void DisplayNode(ptrNode p){
    cout << p->key << ":" << p->height << '\n';
}

void TraverseNLR(ptrNode p, int n){
    for(int i = 1; i <= n; i++){
        cout << " ";
    }

    if(p != nullptr){
        DisplayNode(p);
        TraverseNLR(p->left, n + 3);
        TraverseNLR(p->right, n + 3);
    }

    else cout << "0:0" << '\n';
}

void Traverse(ptrNode root){
    if(isEmpty(root)) cout << "The tree is empty\n";
    else{
        cout << "Recent AVL tree: \n";
        TraverseNLR(root, 0);
    }
}
