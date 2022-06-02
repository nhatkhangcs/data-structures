void ClearStack(Stack& stack) {
	ptrItem p;
	while (stack.Sp != NULL) {
		p = stack.Sp;
		stack.Sp = p->next;
		delete p;
	}

	stack.count = 0;
}
