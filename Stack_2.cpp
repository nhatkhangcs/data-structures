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

void Init(Stack& stack) {
	stack.Sp = NULL;
	stack.count = 0;
	cout << "Stack initialized. \n";
}

bool IsEmpty(Stack stack) {
	return stack.Sp == NULL;
}

void Push(Stack& stack, int theInfo) {
	ptrItem p = new Item;
	p->Info = theInfo;
	p->next = stack.Sp;
	stack.Sp = p;
	stack.count++;
}

int Pop(Stack& stack, bool& error) {
	int res;
	if (IsEmpty(stack)) {
		error = true;
		res = 0;
	}

	else {
		error = false;
		ptrItem p = stack.Sp;
		res = p->Info;
		stack.Sp = p->next;
		delete p;
		stack.count--;
	}

	return res;
}

int Peek(Stack stack, bool& error) {
	if (IsEmpty(stack)) {
		error = true;
		return 0;
	}

	else {
		error = false;
		return stack.Sp->Info;
	}
}

void Disp(Stack stack) {
	if (IsEmpty(stack)) cout << "Stack is Empty.\n";
	else {
		cout << "In the current stack contains:\n";
		ptrItem p = stack.Sp;
		while (p != NULL) {
			cout << p->Info << '\n';
			p = p->next;
		}

		cout << "Number of elements in stack is: " << stack.count << '\n';
	}
}

void ClearStack(Stack& stack) {
	ptrItem p;
	while (stack.Sp != NULL) {
		p = stack.Sp;
		stack.Sp = p->next;
		delete p;
	}

	stack.count = 0;
}

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
