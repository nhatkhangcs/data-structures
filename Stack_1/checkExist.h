bool checkExist(Stack stack, int key){
    for (int i = 0; i <= stack.Sp; i++){
        if (stack.StackArray[i] == key) return true;
    }

    return false;
}
