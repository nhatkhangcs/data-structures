/*
    Author: Vo Hoang Nhat Khang
    Major: Computer Science
    College: Ho Chi Minh University of Technology
    Field: Artificial Intelligent chaser
    21/06/2022
*/

#include <iostream>
using namespace std;

struct Item;
typedef Item* ptrItem;

struct Item {
	int Info;
	ptrItem next;
};

struct Stack {
	ptrItem Sp;
	int count;
};

int main() {
	Stack stack;
	Init(stack);
	int option = 0;
	do {
		system("cls");
		cout << "Choose one of the following: \n";
		cout << "1. Check empty Stack.\n";
		cout << "2. Add key to stack.\n";
		cout << "3. Take the key from stack\n";
		cout << "4. Take stack's root (highest node).\n";
		cout << "5. Display the stack.\n";
		cout << "6. Delete the stack.\n";
		cout << "0. Quit.\n";
		cout << "Input your option: ";
		cin >> option;
		switch (option) {
			case 1: {
				if (IsEmpty(stack)) cout << "Stack is empty\n";
				else cout << "Stack is not empty\n";
				system("pause");
				break;
			}

			case 2: {
				int theInfo;
				cout << "Add new key: ";
				cin >> theInfo;
				Push(stack, theInfo);
				break;
			}

			case 3: {
				if (IsEmpty(stack)) cout << "Stack is empty\n";
				else {
					bool error;
					int theInfo = Pop(stack, error);
					cout << "The key is: " << theInfo << '\n';
				}
				system("pause");
				break;
			}

			case 4: {
				if (IsEmpty(stack)) cout << "Stack is empty\n";
				else {
					bool error;
					int theInfo = Peek(stack, error);
					cout << "The key is: " << theInfo << '\n';
				}
				system("pause");
				break;
			}

			case 5: {
				Disp(stack);
				system("pause");
				break;
			}

			case 6: {
				ClearStack(stack);
				break;
			}
		}
	} while (option != 0);
	return 0;
}
