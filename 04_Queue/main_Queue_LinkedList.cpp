#include<iostream>
#include"Queue_LinkedList.h"
using namespace std;
int main(){
    Queue_L q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    q.dequeue();
    q.display();
    cout<<q.peek()<<endl;
    q.revers();
    q.display();



    return 0;
}