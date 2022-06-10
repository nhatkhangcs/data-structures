int deQueue(Queue& queue, bool& error){
	int res;
	if(isEmpty(queue)){
		error = true;
		res = 0;
	}

	else{
		error = false;
		ptrItem p = queue.Front;
		res = p->info;

		if(queue.Front == queue.Rear){
			queue.Rear = NULL;
		}

		queue.Front = p->next;
		delete p;
		queue.count--;
	}

	return res;
}
