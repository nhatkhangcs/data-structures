#include <iostream>
using namespace std;

struct Item;
typedef Item* ptrItem;

struct Item{
	int info;
	ptrItem next;
};

struct Queue{
    ptrItem Front;
    ptrItem Rear;
    int count;
};

void Init(Queue& queue){
	queue.Front = NULL;
	queue.Rear = NULL;
	queue.count = 0;
}
