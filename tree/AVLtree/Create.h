//If you input a vector, this will help you draw an AVL tree based on the values
void Create(ptrNode& p, vector<int> a, int& i){
    if(a[i] == 0)p = nullptr;
    else{
        p = new Node;
        p->key = a[i];
        i++;
        Create(p->left, a, i);
        i++;
        Create(p->right, a, i);
    }
}
