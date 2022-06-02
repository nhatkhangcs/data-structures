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
