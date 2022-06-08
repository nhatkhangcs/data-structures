void Disp(Queue queue){
	if(isEmpty(queue)) cout << "Stack is empty\n";
	else{
		cout << "Stack contains: \n";
		int i = queue.front;
		bool cont = true;
		while(cont){
			cout << queue.QueueArray[i] <<'\n';
			if(i == queue.rear) cont = false;
			
			else{
				i++;
				i = i % queue.size;
			}
		}
		
		cout << "Current number of elements: " << queue.count << '\n';
		cout << "Maximum number of elements: " << queue.size << '\n';
	}
}
