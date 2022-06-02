void Push(Stack& stack, int theInfo) {
	ptrItem p = new Item;
	p->Info = theInfo;
	p->next = stack.Sp;
	stack.Sp = p;
	stack.count++;
}
