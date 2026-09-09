#include<iostream>
#include "List.h"


using namespace std;
int main(){
    Array arr(10);
    arr.append(1);
    arr.append(2);
    arr.append(3);
    arr.append(4);
    arr.append(5);
    arr.display();
    arr.insert(1,11);
    arr.display();
    arr.remove(1);
    arr.display();
    cout<<arr.LinearSearch(3)<<endl;
    arr.display();
    cout<<arr.BinarySearch(4)<<endl;
    arr.display();
    cout<<arr.max()<<" - "<<arr.min()<<" - "<<arr.sum()<<endl;
    cout<<arr.getLength();

    return 0;
}
