#include<iostream>
#include"Node.h"
using namespace std;

class Queue_L{
    private:
    Node *front;
    Node *rear;
    int count;
    public:
    Queue_L(){
        front = nullptr;
        rear = nullptr;
        count = 0;
    }
    bool isEmpty();
    void enqueue(int ele);
    int dequeue();
    int peek();
    void display();
    void revers();
};
bool Queue_L::isEmpty(){
    return front == nullptr;
}
void Queue_L::enqueue(int ele){
    Node *temp = new Node(ele);
    if(isEmpty()){
        front = rear = temp;
        return;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
    count++;
}