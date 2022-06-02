#include <iostream>
#include <stack>
using namespace std;

void Init(Stack& stack, int theSize){
    stack.StackArray = new int[theSize];
    stack.Sp = -1;
    stack.size = theSize;
    stack.count = 0;
    cout << "Stack initialized" << '\n';
}
