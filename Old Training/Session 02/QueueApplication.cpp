#include<iostream>
using namespace std;
struct Queue{
    int arr[100];
    int size;

    Queue(){
        size = 0;
    }
    void push_back(int x){
        arr[size++] = x;
    }
    void push_front(int x){
        // Shift right
        for (int i = size; i > 0 ; --i) {
            arr[i] = arr[i - 1];
        }
        arr[0] = x;
        size++;
    }
    int remove_front() {/*write the implemintation here Hw..*/}
    int remove_back() {/*write the implemintation here Hw..*/}
    void print(){
        for (int i = 0; i < size; ++i) {
            cout << arr[i] <<' ';
        }
        cout << endl;
    }
    
};

int main() {
	Queue my_queue;

	my_queue.push_back(10);
	my_queue.push_back(20);
	my_queue.push_back(30);
	my_queue.print();

	my_queue.push_front(1);
	my_queue.push_front(4);
	my_queue.print();

	cout<<my_queue.remove_front()<<"\n";
	my_queue.print();

	return 0;
}
