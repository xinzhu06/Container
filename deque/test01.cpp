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
}

int main()
{
    test1();

}