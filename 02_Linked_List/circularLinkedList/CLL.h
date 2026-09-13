#include <iostream>
#include "CNode.h"
using namespace std;

class CLL
{
private:
    CNode *last;

public:
    CLL()
    {
        last = nullptr;
    }
    bool isEmpty();
    void insertAtBeginning(int ele);
    void insertAtEnd(int ele);
    void insertAtPosition(int ele, int position);
    void deleteAtBebinning();
    bool Search(int ele);
    int length();
    void display();
    void revers();
};
bool CLL::isEmpty(){
    return last==nullptr;
}
void CLL::insertAtBeginning(int ele)
{
    CNode *newNode = new CNode(ele);

    if (!last)
    {
        last = newNode;
        last->next = last;
        return;
    }

    newNode->next = last->next;
    last->next = newNode;
}
void CLL::deleteAtBebinning(){
    if(!last){
        return;
    }
    CNode *temp = last->next;
    if(last == temp){
        delete last;
        last = nullptr;
        return;
    }
    last->next = temp->next;
    delete temp;
}
bool CLL::Search(int ele){
    if(!last){
        return false;
    }
    CNode *temp = last ->next;
    do{
        if(temp->data == ele){
            return true;
        }
        temp = temp->next;
    }while(temp != last->next);
    return false;
}
int CLL::length(){
    if(!last){
        return 0;
    }
    int count = 0;
    CNode *temp = last->next;
    do{
        count++;
        temp = temp->next;
    }while(temp != last->next);
    return count;
}
void CLL::display(){
    if(!last){
        return;
    }
    CNode *temp = last->next;
    do{
        cout<<temp->data<<" , ";
        temp = temp->next;
    }while(temp != last->next);
    cout<<endl;

}
void CLL::revers(){
    if(last==nullptr || last->next == last){
        return;
    }
    CNode *prev = nullptr;
    CNode *current = last;
    CNode *nextNode = nullptr;
    do{
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current  = nextNode;
        
    }while(current != last);
    last->next = prev;
    last = prev;
}