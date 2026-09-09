#include <iostream>
#include <iostream>
#include "Node.h"

using namespace std;

class SLL
{
private:
    Node *head;

public:
    SLL() { head = nullptr; };
    ~SLL() { clear(); };
    void display();
    int length();
    void insertAtBeginning(int ele);
    void insertAtEnd(int ele);
    void insertAtPosition(int ele, int position);
    void insertSorted(int ele);
    void sort();
    void deleteAtBeginning();
    void deleteAtEnd();
    void deleteAtPosition(int position);
    void clear();
    SLL intersect(SLL other);
    SLL intersect_for_sorted(SLL other);
    void RemoveDup();
    void RemoveDup_prime();
    bool search(int ele);
    void revers();
    void sorting();
};
void SLL::display()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " , ";
        temp = temp->next;
    }
    cout << endl;
}
int SLL::length()
{
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void SLL::insertAtBeginning(int ele)
{
    if (!head)
    {
        head = new Node(ele);
        return;
    }

    Node *newNode = new Node(ele);
    newNode->next = head;
    head = newNode;
}
void SLL::insertAtEnd(int ele)
{
    Node *newNode = new Node(ele);
    if (!head)
    {
        head = newNode;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}