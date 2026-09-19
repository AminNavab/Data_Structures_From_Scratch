#include <iostream>
using namespace std;
class Queue_A
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int count;

public:
    Queue_A(int size = 10)
    {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }
    bool isEmpty();
    bool isFull();
    void enqueue(int ele);
    int dequeue();
    int peek();
    void display();
    void revers();
};
bool Queue_A::isEmpty(){
    return count ==0;
}
bool Queue_A::isFull(){
    return count == capacity;
}
void Queue_A::enqueue(int ele){
    if(isFull()){
        return;
    }
    rear = (rear+1)%capacity;
    arr[rear] = ele;
    count++;
}
int Queue_A::dequeue(){
    if(isEmpty()){
        return -1;
    }
    int ele = arr[front];
    front = (front+1)%capacity;
    count--;
    return ele;

}
int Queue_A::peek(){
    if(isEmpty()){
        return -1;
    }
    return arr[front];
}
void Queue_A::display(){
    if(isEmpty()){
        return;
    }
    for(int i = 0; i<count; i++){
        cout<<arr[(front+i)%capacity]<<" , ";
    }
    cout<<endl;
}
void Queue_A::revers(){
    if(isEmpty()){
        return;
    }
    int frontEle = dequeue();
    revers();
    enqueue(frontEle);
}