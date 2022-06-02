Stack deleteStack(Stack stack, int keyDelete){
    Stack newStack;
    newStack.StackArray = new int[stack.Sp - 1];
    newStack.Sp = -1;
    for (int i = 0; i <= stack.Sp; i++){
        if (keyDelete == stack.StackArray[i]){
            for (int j = i; j + 1 <= stack.Sp; j++){
                newStack.StackArray[j] = stack.StackArray[j + 1];
                newStack.Sp++;
            }
            break;
        }

        else {
            
            newStack.StackArray[i] = stack.StackArray[i];
            newStack.Sp++;
        }
    }
    return newStack;
}
