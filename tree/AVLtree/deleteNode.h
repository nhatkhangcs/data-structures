void Remove(ptrNode& p, int theKey, bool& error){
    error= true;
    if(p!= nullptr){
        if(theKey < p->key){
            Remove(p->left, theKey, error);
            if(getHeight(p->right) - getHeight(p->left) == 2) RotateWithRightChild(p);
            ComputeHeight(p);
        }

        else if (theKey == p->key){
            error = false;
            ptrNode q = p;
            if(p->left == nullptr && p->right == nullptr) p = nullptr;
            else if(p->left != nullptr && p->right == nullptr) p = p->left;
            else if(p ->left == nullptr && p->right != nullptr) p = p->right;
            else{
                RemoveRightmostNode(p->left, q);
                if(getHeight(p->right) - getHeight(p->left) == 2) RotateWithRightChild(p);
                ComputeHeight(p);
            }

            delete q;
        }
    }

    else{
        Remove(p->right, theKey, error);
        if(getHeight(p->left) - getHeight(p->right) == 2) RotateWithLeftChild(p);
        ComputeHeight(p);
    }
}
