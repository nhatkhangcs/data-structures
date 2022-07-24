int getHeight(ptrNode p){
    if (p == NULL) return 0;
    else return p->height;
}

void ComputeHeight(ptrNode p){
    if(getHeight(p->left) >= getHeight(p->right)) p->height = getHeight(p->left) + 1;
    else p->height = getHeight(p->right) + 1;
}
