void DoubleWithRightChild(ptrNode& p){
    ptrNode q = p->right;
    ptrNode r = q->left;
    q->left = r->right;
    q->right = r->left;
    r->left = p;
    r->right = q;
    ComputeHeight(q);
    ComputeHeight(p);
    ComputeHeight(r);
    p = r;
}
