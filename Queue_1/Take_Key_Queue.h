int Peek(Queue queue, bool& error){
	int res;
	if(isEmpty(queue)){
		error = true;
		res = 0;
	}
	
	else{
		error = false;
		res = queue.QueueArray[queue.front];
	}
	
	return res;
}
