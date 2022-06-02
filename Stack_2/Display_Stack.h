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
