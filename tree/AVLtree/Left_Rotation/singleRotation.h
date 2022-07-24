void SingleWithLeftChild(ptrNode& p){
    ptrNode q = p->left;
    p->left = q->right;
    q->right = p;
    ComputeHeight(p);
    ComputeHeight(q);
    p = q;
}
