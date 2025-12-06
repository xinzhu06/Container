#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> &d1)
{
    for (deque<int>::const_iterator it = d1.begin();it != d1.end();it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
}

void test1()
{
    deque<int>d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int>d2;
    d2 = d1;
    printDeque(d2);
    deque<int>d3;
    d3.assign(d1.begin(),d1.end());
    printDeque(d3);
    deque<int>d4;
    d4.assign(10,100);
    printDeque(d4);

    if (d1.empty())
    {
        cout << "d1 empty" << endl;
    }else{
        cout << "d1 size " << d1.size() << endl;
    }//deque没有容量的概念
    
    d1.resize(15,1);
    printDeque(d1);
}

int main()
{
    test1();

}