void DoubleWithleftChild(ptrNode& p){
    ptrNode q = p->left;
    ptrNode r = q->right;
    q->right = r->left;
    q->left = r->right;
    r->left = q;
    r->right = p;
    ComputeHeight(q);
    ComputeHeight(p);
    ComputeHeight(r);
    p = r;
}
