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
void SLL::insertAtPosition(int ele, int position)
{
    if (position < 1)
    {
        cout << "invalid position!! \n";
        return;
    }
    if (position == 1)
    {
        insertAtBeginning(ele);
        return;
    }
    Node *temp = head;
    Node *newNode = new Node(ele);
    for (int i = 1; temp != nullptr && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void SLL::deleteAtBeginning()
{
    if (!head)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    temp = nullptr;
    delete temp;
}
void SLL::deleteAtEnd()
{
    if (!head)
    {
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
void SLL::deleteAtPosition(int position)
{
    if (!head)
    {
        return;
    }
    if (position < 1)
    {
        cout << "invalid position \n";
        return;
    }
    if (position == 1)
    {
        deleteAtBeginning();
        return;
    }
    Node *temp = head->next;
    Node *pre = head;
    int count = 1;
    while (count < position - 1 || temp->next == nullptr)
    {
        count++;
        temp = temp->next;
        pre = pre->next;
    }
    pre->next = temp->next;
    delete temp;
}
void SLL::clear()
{
    while (head)
    {
        deleteAtBeginning();
    }
}
void SLL::sort()
{
    if (!head || !head->next)
    {
        return;
    }
    int size = length();
    for (int i = 0; i < size - 1; i++)
    {
        Node *ptr1 = head;
        Node *ptr2 = head->next;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ptr1->data > ptr2->data)
            {
                int temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
}
void SLL::insertSorted(int ele)
{
    Node *temp = new Node(ele);
    Node *ptr = head;
    Node *pre = nullptr;
    if (!head || head->data > ele)
    {
        head = temp;
        head->next = ptr;
        return;
    }
    while (ptr != nullptr && ptr->data < temp->data)
    {
        pre = ptr;
        ptr = ptr->next;
    }
    pre->next = temp;
    temp->next = ptr;
}
SLL SLL::intersect(SLL other)
{
    SLL res;
    for (Node *ptr1 = head; ptr1; ptr1 = ptr1->next)
    {
        for (Node *ptr2 = other.head; ptr2; ptr2 = ptr2->next)
        {
            if (ptr1->data == ptr2->data)
            {
                res.insertSorted(ptr1->data);
                break;
            }
        }
    }
    return res;
}
SLL SLL::intersect_for_sorted(SLL other)
{
    SLL res;
    Node *ptr1 = head;
    Node *ptr2 = other.head;
    while (ptr1 != nullptr && ptr2 != nullptr)
    {
        if (ptr1->data == ptr2->data)
        {
            res.insertAtBeginning(ptr1->data);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if (ptr1->data > ptr2->data)
        {
            ptr2 = ptr2->next;
        }
        else
        {
            ptr1 = ptr1->next;
        }
    }
    return res;
}
void SLL::RemoveDup()
{
    Node *temp = nullptr;
    Node *ptr = head;
    if (!head)
    {
        return;
    }
    while (ptr->next)
    {
        if (ptr->data == ptr->next->data)
        {
            temp = ptr->next;
            ptr->next = ptr->next->next;
            delete temp;
        }
        ptr = ptr->next;
    }
}