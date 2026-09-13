#include <iostream>
using namespace std;

class DNode
{
public:
    int data;
    DNode *next;
    DNode *prev;

    DNode(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};