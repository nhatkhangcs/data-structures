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
