#include <iostream>
#include "Node.h"
using namespace std;

class Stack
{
private:
    Node *head;

public:
    Stack()
    {
        head = nullptr;
    }
    bool isEmpty();
    void push(int ele);
    int pop();
    int peek();
    void display();
    void revers();
};
bool Stack::isEmpty()
{
    if (!head)
    {
        return true;
    }
    return false;
}
void Stack::push(int ele)
{
    if (!head)
    {
        head = new Node(ele);
        return;
    }
    Node *temp = head;
    head = new Node(ele);
    head->next = temp;
}
int Stack::pop(){
    int res = -1;
    if(!isEmpty()){
        Node *temp = head->next;
        res = head->data;
        delete head;
        head = temp;
    }
    return res;
}
int Stack::peek(){
    if(!isEmpty()){
        return head->data;
    }
    return -1;
}
void Stack::display(){
    if(isEmpty()){
        return;
    }
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" , ";
        temp = temp->next;
    }
    cout<<endl;
}
void Stack::revers(){
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;
    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}