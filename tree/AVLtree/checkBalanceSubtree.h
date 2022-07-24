bool isBalanced(ptrNode p, int& height){
    bool avl;
    if(p == nullptr){
        avl = true;
        height = 0;
    }

    else{
        int leftHeight, rightHeight;
        avl = isBalanced(p->left, leftHeight);
        if(avl) avl = isBalanced(p->right, rightHeight);
        if(avl){
            if(leftHeight == rightHeight + 2 || rightHeight == leftHeight + 2) avl = false;
            else{
                if(leftHeight > rightHeight) height = leftHeight + 1;
                else height = rightHeight + 1;
            }
        }
    }

    return avl;
}
