void RotateWithRightChild(ptrNode& p){
    ptrNode q = p->right;
    if(getHeight(p->left) <= getHeight(p->right)) RotateWithRightChild(p);
    else DoubleWithRightChild(p);
}
