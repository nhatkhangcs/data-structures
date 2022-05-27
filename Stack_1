#include <iostream>
#include <stack>
using namespace std;

struct Stack{
    int* StackArray;
    int Sp;
    int size;
    int count;
};

void Init(Stack& stack, int theSize){
    stack.StackArray = new int[theSize];
    stack.Sp = -1;
    stack.size = theSize;
    stack.count = 0;
    cout << "Stack initialized" << '\n';
}

bool checkEmpty(Stack stack){
    if (stack.Sp == -1) return true;
    return false;
}

bool checkFull(Stack stack){
    if (stack.Sp == stack.size - 1) return true;
    return false;    
}

void insertStack(int Info, Stack& stack){
    if (checkFull(stack)) cout << "The Stack is full, cannot add!";
    else{
        stack.Sp++;
        stack.StackArray[stack.Sp] = Info;
        stack.count++;
    }
}

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

bool checkExist(Stack stack, int key){
    for (int i = 0; i <= stack.Sp; i++){
        if (stack.StackArray[i] == key) return true;
    }

    return false;
}

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

int main(){
    
    Stack stack;
    int size;
    cout << "Input the size of stack: ";
    cin >> size;
    Init(stack,size);
    while(!checkFull(stack)){
        int n;
        cout << "Add a number into a stack: ";
        cin >> n;
        insertStack(n, stack);
    }   
    dispStack(stack);

    int key = 0;
    cout << "Enter the key here: ";
    cin >> key;
    if (checkExist(stack, key)) cout << "The key is inside the stack";
    else cout << "No key found";
    cout << '\n';

    int del;
    cout << "Input stack you want to delete: ";
    cin >> del;
    Stack thisstack = deleteStack(stack,del);
    dispStack(thisstack);

    return 0;
}
