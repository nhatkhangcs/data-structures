bool isFull(Queue queue){
	return (queue.rear - queue.front + 1 == queue.size || queue.rear - queue.front + 1 == 0);
}
