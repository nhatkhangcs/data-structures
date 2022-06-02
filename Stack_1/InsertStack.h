void insertStack(int Info, Stack& stack){
    if (checkFull(stack)) cout << "The Stack is full, cannot add!";
    else{
        stack.Sp++;
        stack.StackArray[stack.Sp] = Info;
        stack.count++;
    }
}
