void Enqueue(Queue& queue, int theInfo){
	ptrItem p = new Item;
	p->info = theInfo;
	p->next = NULL;
	if(queue.Front == NULL) queue.Front = p;
	else queue.Rear->next = p;
	queue.Rear = p;
	queue.count++;
}
