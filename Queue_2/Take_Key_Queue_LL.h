int Peek(Queue queue, bool& error){
	int res;
	if(isEmpty(queue)){
		error = true;
		res = 0;
	}

	else{
		error = false;
		res = queue.Front->info;
	}

	return res;
}
