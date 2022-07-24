void Clear(ptrNode& p){
    if(p != nullptr){
        Clear(p->left);
        Clear(p->right);
        delete p;
        p = NULL;
    }
}
