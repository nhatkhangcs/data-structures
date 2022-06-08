int deQueue(Queue& queue, bool& error){
	int res;
	if(isEmpty(queue)){
		error = true;
		res = 0;
	}
	
	else{
		error = false;
		res = queue.QueueArray[queue.front];
		
		if(queue.front == queue.rear){
			queue.front = -1;
			queue.rear = -1;
		}
		
		else queue.front++;
		queue.count--;
	}
	
	return res;
}
