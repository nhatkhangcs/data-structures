#include <iostream>
using namespace std;
typedef int* ptrQueue;

struct Queue{
	ptrQueue QueueArray;
	int front;
	int rear;
	int size;
	int count;
}; 

void Init(Queue& queue, int theSize){
	queue.QueueArray = new int[theSize];
	queue.front = -1;
	queue.rear = -1;
	queue.size = theSize;
	queue.count = 0;
	
}
