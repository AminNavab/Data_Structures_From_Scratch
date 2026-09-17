#include<iostream>
#include <stack>
using namespace std;
class Stack{
    private:
    int *arr;
    int capacity;
    int topIndex;
    public:
    Stack(int size = 100){
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }
    bool isEmpty();
    bool isFull();
    void push(int ele);
    int pop();
    int peek();
    int size();
    void display();
    void revers();
};
bool Stack::isEmpty(){
    return topIndex == -1;
}
bool Stack::isFull(){
    return topIndex == capacity-1;
}
void Stack::push(int ele){
    if(isFull()){
        return;
    }
    arr[++topIndex] = ele;
}
int Stack::pop(){
    if(isEmpty()){
        return -1;
    }
    return arr[topIndex--];

}
int Stack::peek(){
    if(isEmpty()){
        return -1;
    }
    return arr[topIndex];
}
int Stack::size(){
    return topIndex+1;
}
void Stack::display(){
    if(isEmpty()){
        return;
    }
    for(int i = topIndex; i>=0; i--){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
void Stack::revers(){
    Stack temp;
    while(!isEmpty()){
        temp.push(pop());
    }
    while(!temp.isEmpty()){
        push(temp.pop());
        
    }
}
// void sorting(Stack &s){
//     Stack s_temp,
//     int temp ;
//     while(!s.isEmpty()){
//         temp = s.pop();
//         while(!s.isEmpty() && s_temp.peek()>temp){
//             s.push(s.pop());

//         }
//         s.push(temp);
//     }
//     while(!s.isEmpty()){
//         s.push(s.pop());
//     }
// }