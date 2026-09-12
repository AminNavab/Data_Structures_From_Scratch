#include <iostream>
#include "SLL.h"
using namespace std;
int main()
{
    SLL S;
    S.insertAtBeginning(1);
    S.insertAtBeginning(6);
    S.insertAtBeginning(7);
    S.insertAtBeginning(11);
    S.insertAtBeginning(21);
    S.insertAtBeginning(31);
    SLL s1;
    s1.insertAtBeginning(1);
    s1.insertAtBeginning(2);
    s1.insertAtBeginning(3);
    s1.display();
    s1.insertAtEnd(4);
    s1.insertAtEnd(5);
    s1.display();
    s1.insertAtPosition(6, 2);
    s1.insertAtPosition(7, 4);
    s1.insertAtPosition(8, 1);
    s1.insertAtPosition(9, 0);
    s1.insertAtPosition(10, 20);
    s1.display();
    s1.deleteAtBeginning();
    s1.display();
    s1.deleteAtEnd();
    s1.display();
    s1.deleteAtPosition(3);
    s1.display();
    s1.sort();
    s1.display();
    cout << "---------------\n";
    s1.insertSorted(0);
    s1.display();
    s1.insertSorted(7);
    s1.display();
    s1.insertSorted(20);
    s1.display();
    cout << "---------------\n";
    SLL x = s1.intersect(S);
    x.display();
    cout << "---------------\n";
    s1.sort();
    S.sort();
    SLL x1 = s1.intersect_for_sorted(S);
    x1.display();
    cout<<"-------------------\n";
    s1.RemoveDup();
    s1.display();
    cout<<"-------------------\n";
    SLL s2;
    s2.insertAtBeginning(6);
    s2.insertAtBeginning(3);
    s2.insertAtBeginning(5);
    s2.insertAtBeginning(1);
    s2.insertAtBeginning(1);
    s2.insertAtBeginning(3);
    s2.display();
    cout<<"***\n";
    s2.RemoveDup_prime();
    s2.display();
    cout<<"-------------------\n";
    cout<<s2.search(4)<<endl;
    cout<<s2.search(6)<<endl;
    s2.revers();
    s2.display();
    s2.insertAtBeginning(5);
    s2.insertAtEnd(10);
    s2.insertAtEnd(6);
    cout<<"-------\n";
    s2.display();
    s2.sorting();
    s2.display();

    

    return 0;
}