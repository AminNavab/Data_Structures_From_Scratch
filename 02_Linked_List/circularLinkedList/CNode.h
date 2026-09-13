#include<iostream>
using namespace std;
class CNode{
    public:
    int data;
    CNode *next;

    CNode(int data){
        this->data = data;
        next = nullptr;
    }
};