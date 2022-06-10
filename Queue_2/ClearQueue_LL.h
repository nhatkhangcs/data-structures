void clear(Queue& queue){
	ptrItem p;
	while(queue.Front){
        p = queue.Front;
        queue.Front = p->next;
        delete p;
	};
	queue.Rear = NULL;
	queue.count = 0;
}
