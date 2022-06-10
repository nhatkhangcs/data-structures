/*
Author: Vo Hoang Nhat Khang
Time: 10/06/2022
TOPIC: Queue
Subject: DATA STRUCTURE and ALGORITHM
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
	int size;
	cout << "Input the maximmum elements: ";
	cin >> size;
	Queue queue;
	Init(queue, size);
	cout << "Queue initialized!\n";
	
	int opt = 0;
	do{
		system("cls");
		cout << "Choose one of the followings: \n";
		cout << "1. Check if the queue is empty.\n";
		cout << "2. Add key into queue.\n";
		cout << "3. Take the key from queue.\n";
		cout << "4. See the top key of queue.\n";
		cout << "5. Display the full queue.\n";
		cout << "6. Cancel the queue.\n";
		cout << "0. End activity.\n";
		
		cin >> opt;
		
		switch(opt){
			case 1:{
				if (isEmpty(queue)) cout << "The queue is empty.\n";
				else cout << "The queue is not empty.\n";
				system("pause");
				break;
			}
			
			case 2:{
				int theInfo;
				cout << "Input the key: ";
				cin >> theInfo;
				bool error;
				Enqueue(queue, theInfo, error);
				if(error) {
					cout << "The queue is full, cannot add key!\n";
					system("pause");	
				}
				break;
			}
			
			case 3:{
				if (isEmpty(queue)) cout << "The queue is empty.\n";
				else{
					bool error;
					int theInfo = deQueue(queue, error);
					cout << "The taken key is: " << theInfo << '\n';
				}
				system("pause");
				break;
			}
			
			case 4:{
				if (isEmpty(queue)) cout << "The queue is empty.\n";
				else{
					bool error;
					int theInfo = Peek(queue, error);
					cout << "The taken top key is: " << theInfo << '\n';
				}
				system("pause");
				break;
			}
			
			case 5:{
				Disp(queue);
				system("pause");
				break;
			}
			
			case 6:{
				clear(queue);
				cout << "Queue deleted.\n";
				system("pause");
				break;
			}
		}
	}
	while(opt!= 0);
	
	return 0;
}
