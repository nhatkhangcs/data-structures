void Insert(ptrNode& p, int theKey){
    if(p == nullptr){
        p = new Node;
        p->key = theKey;
        p->height = 1;
        p->count = 1;
        p->left = nullptr;
        p->right = nullptr;
    }

    else if(theKey < p->key){
        Insert(p->left, theKey);
        if(getHeight(p->left) - getHeight(p->right) == 2) RotateWithLeftChild(p);
        ComputeHeight(p);
    }

    else if(theKey == p->key) p->count = p->count + 1;

    else{
        Insert(p->right, theKey);
        if(getHeight(p->right) - getHeight(p->left) == 2) RotateWithRightChild(p);
        ComputeHeight(p);
    }
}
