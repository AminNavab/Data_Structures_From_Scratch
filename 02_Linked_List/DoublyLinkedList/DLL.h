#include <iostream>
#include "DNode.h"
using namespace std;

class DLL
{
private:
    DNode *head;
    DNode *tail;

public:
    DLL()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool isEmpty();
    void display();
    void insert(int ele);
    void remove(int ele);
    void revers();
};
bool DLL::isEmpty()
{
    return head == nullptr;
}
void DLL::display()
{
    DNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " , ";
        temp = temp->next;
    }
    cout << endl;
}
void DLL::insert(int ele){
    if(!head){
        head = new DNode(ele);
        return;
    }
    DNode *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new DNode(ele);
    temp->next->prev = temp;
}
void DLL::remove(int ele){
    if(!head){
        return;
    }
    DNode *ptr = head;
    while(true){
        if(head->data == ele){
            head = ptr->next;
            ptr->next->prev = nullptr;
            delete ptr;
            ptr = head;
        }
        else if(ptr->data == ele){
                ptr->prev->next = ptr->next;
                if(ptr->next){
                    ptr->next->prev = ptr->prev;
                    DNode *temp = ptr->next;
                    delete ptr;
                    ptr = temp;

                }
        }
        else{
            ptr = ptr->next;
        }
        if(!ptr){
            break;
        }

        
    }
}
void DLL::revers(){
    if(head == nullptr){
        return;
    }
    DNode *current = head;
    DNode *temp = nullptr;
    while(current != nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;

    }
    if(temp != nullptr){
        head = temp->prev;
    }
}