#include <iostream>
using namespace std; 

class Queue { 
	int size; 
	int* queue; 
	
	public:
	Queue() {
		size = 0;
		queue = new int[100];
	}
	void remove() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		else { 
			for (int i = 0; i < size - 1; i++) {    //The loop iterates through the elements of the queue up to the second-to-last element.
				queue[i] = queue[i + 1];    //Each element in the queue is replaced by the element that follows it, effectively shifting all elements to the left by one position.
			} 
			size--; //After the loop, the size of the queue is reduced by 1.
		} 
	} 
	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { //The loop iterates through all elements of the queue.
			cout<<queue[i]<<" <- ";
		} 
		cout <<endl;
	}
	void add(int item) {
		if(size == 100) {
			cout << "Queue is full"<<endl;
			return;
		}
		queue[size] = item;
		size++;
	}
}; 

int main() { 
	Queue q; 
	q.add(42); q.add(2); q.add(8); q.add(1); 
	q.print();
	q.remove(); 
	q.add(128); 
	q.print(); 
	q.remove(); 
	q.remove(); 
	q.print(); 

	return 0; 
} 
