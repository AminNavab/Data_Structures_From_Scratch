#include<iostream>
#include"DLL.h"
using namespace std;
int main(){
    DLL d1;
    d1.insert(1);
    d1.insert(2);
    d1.insert(3);
    d1.insert(4);
    d1.display();
    d1.remove(3);
    d1.display();
    d1.revers();
    d1.display();




    return 0;
}