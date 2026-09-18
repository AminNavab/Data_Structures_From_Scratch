#include<iostream>
#include"Stack_LinkedList.h"
using namespace std;
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    s.pop();
    s.display();
    cout<<s.peek()<<endl;
    s.revers();
    s.display();
}