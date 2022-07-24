void RotateWithLeftChild(ptrNode& p){
    ptrNode q = p->left;
    if(getHeight(p->left) >= getHeight(p->right)) SingleWithLeftChild(p);
    else DoubleWithleftChild(p);
}
