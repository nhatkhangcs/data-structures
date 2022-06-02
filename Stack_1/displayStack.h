void dispStack(Stack stack){
    if (checkEmpty(stack)) cout << "The stack is empty";
    else{
        cout << "This stack is: " << '\n';
        for (int i = stack.Sp; i >= 0; i--)
        {
            cout << stack.StackArray[i] << '\n';
        }
    }
}
