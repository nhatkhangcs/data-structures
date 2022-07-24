void SingleWithRightChild(ptrNode& p){
    ptrNode q = p->right;
    p->right = q->left;
    q->left = p;
    ComputeHeight(p);
    ComputeHeight(q);
    p = q;
}
