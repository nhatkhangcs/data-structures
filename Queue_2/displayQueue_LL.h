void Disp(Queue queue){
	if(isEmpty(queue)) cout << "Stack is empty\n";
	else{
		cout << "Stack contains: \n";
		ptrItem p = queue.Front;

		while(p){
			cout << p->info << '\n';
			p = p->next;
		}

		cout << "Current number of elements: " << queue.count << '\n';
	}
}
