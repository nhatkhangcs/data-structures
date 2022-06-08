void Enqueue(Queue& queue, int theInfo, bool& error){
	if(isFull(queue)) error = true;
	else{
		error = false;
		if(isEmpty(queue)) queue.front = 0;	
		queue.rear++;
		queue.rear = queue.rear % queue.size;
		queue.QueueArray[queue.rear] = theInfo;
		queue.count++;
	} 
}
