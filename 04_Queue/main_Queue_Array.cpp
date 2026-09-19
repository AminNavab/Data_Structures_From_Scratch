#include<iostream>
#include"Queue_Array.h"
using namespace std;
int main(){
    Queue_A q;
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