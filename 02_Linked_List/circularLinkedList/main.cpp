#include<iostream>
#include "CLL.h"
using namespace std;
int main(){
    CLL c;
    c.insertAtBeginning(1);
    c.insertAtBeginning(2);
    c.insertAtBeginning(3);
    c.insertAtBeginning(4);
    c.display();
    c.deleteAtBebinning();
    c.display();
    cout<<c.Search(3)<<endl<<c.length()<<endl;
    c.revers();
    c.display();






    return 0;
}