#include <iostream>
using namespace std;
class Array
{

private:
    int size;
    int length;
    int *data;

public:
    Array(int size);
    ~Array();
    void display();
    void append(int ele);
    void insert(int index, int ele);
    bool isFull();
    int remove(int index);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int max();
    int min();
    int sum();
    int getLength();
};
Array::Array(int size)
{
    this->size = size;
    length = 0;
    data = new int[size];
}
Array::~Array()
{
    delete[] data;
}
void Array::display()
{
    for (int i = 0; i < length; i++)
    {
        cout << data[i] << ",";
    }
    cout << endl;
}