#include<iostream>
#include<string>
using namespace std;

class Queue{
    string arr[5];
    int size = 0;
    public:
    void enqueue(string name){
        if(isFull()){
            cout<<"The queue is full!"<<endl;
        }
        else{
            arr[size] = name;
            size++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"The queue is empty!"<<endl;
        }
        else{
            cout << arr[0] << " has been served and removed from the queue." << endl;
            for(int i =0; i<size-1; i++){
                arr[i] = arr[i+1];
            }
            size--;
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"The queue is empty!"<<endl;
        }
        else{
            for(int i =0; i<size; i++){
                cout<<arr[i]<<endl;
            }
        }
    }

    bool isFull(){
        return (size == 5) ;
    }

    bool isEmpty(){
        return (size == 0) ;
    }
};

int main(){
    Queue queue;
    queue.enqueue("Alice");
    queue.enqueue("Bob");
    queue.enqueue("Charlie");
    queue.display();

    queue.dequeue();
    queue.enqueue("Simmy");
    queue.display();

}