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
void Array::append(int ele)
{
    if (!isFull())
    {
        data[length++] = ele;
    }
}
void Array::insert(int index, int ele)
{
    if (!isFull())
    {
        if (index < 0 || index > length)
        {
            return;
        }
        if (index == size)
        {
            return;
        }
        for (int i = length; i >= index; i--)
        {
            data[i + 1] = data[i];
        }
        data[index] = ele;
        length++;
    }
}
bool Array::isFull()
{
    if (length == size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Array::remove(int index)
{
    if (index < 0 || index >= length)
    {
        return -1;
    }
    int deleted = data[index];
    for (int i = index; i < length; i++)
    {
        data[i] = data[i + 1];
    }
    length--;
    return deleted;
}
int Array::LinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (data[i] == key)
        {
            return key;
        }
    }
    return -1;
}
int Array::BinarySearch(int Key)
{
    int low = 0;
    int high = length;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (data[mid] == Key)
        {
            return Key;
        }
        else if (Key < data[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int Array::max()
{
    int max = data[0];
    for (int i = 0; i < length; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }
    return max;
}
int Array::min()
{
    int min = data[0];
    for (int i = 0; i < length; i++)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
    }
    return min;
}
int Array::sum()
{
    int Sum = 0;
    for (int i = 0; i < length; i++)
    {
        Sum += data[i];
    }
    return Sum;
}
int Array::getLength()
{
    return length;
}