/*
    Author: Vo Hoang Nhat Khang
    Major: Computer Science
    College: Ho Chi Minh University of Technology
    Field: Artificial Intelligent chaser
    21/06/2022
*/

#include <iostream>
#include <stack>
// #include other headers in order to use the file
using namespace std;

struct Stack{
    int* StackArray;
    int Sp;
    int size;
    int count;
};

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
