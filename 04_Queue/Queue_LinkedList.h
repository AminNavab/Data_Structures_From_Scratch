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
int Queue_L::dequeue(){
    if(isEmpty()){
        return -1;
    }
    Node *temp = front;
    int ele = temp->data;
    front = front->next;
    if(front == nullptr){
        rear = nullptr;
    }
    delete temp;
    count--;
    return ele;
}
int Queue_L::peek(){
    if(isEmpty()){
        return -1;
    }
    return front->data;
}
void Queue_L::display(){
    if(isEmpty()){
        return;
    }
    Node *temp = front;
    while(temp != nullptr){
        cout<<temp->data<<" , ";
        temp = temp->next;
    }
    cout<<endl;
}
void Queue_L::revers(){
    if(isEmpty()){
        return;
    }
    int frontEle = dequeue();
    revers();
    enqueue(frontEle);
}
