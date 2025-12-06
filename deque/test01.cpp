#include <iostream>
#include <deque>
#include <algorithm>
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
void test2()
{
    deque<int>v5;
    v5.push_back(10);
    v5.push_back(20);
    v5.push_front(100);
    v5.push_front(200);
    printDeque(v5);
    v5.pop_back();
    v5.pop_front();
    printDeque(v5);
}

void test3()
{
    deque<int>d5;
    d5.push_back(10);
    d5.push_back(20);
    printDeque(d5);
    d5.insert(d5.begin(),5);
    printDeque(d5);
    d5.insert(d5.begin() + 2,5);
    printDeque(d5);
    d5.insert(d5.begin() + 2,4,10);
    printDeque(d5);
    d5.erase(d5.begin());
    printDeque(d5);
    d5.clear();
}

void test4()
{
    deque<int>n;
    for (int i = 0; i < 10; i++)
    {
        n.push_back(i);
    }
    cout << n.front() << n.back() << n.at(2);

}

void test5()
{
    deque <int >m;
    m.push_back(20);
    m.push_back(30);
    m.push_back(40);
    m.push_back(5);
    m.push_back(327);
    m.push_back(1432);
    m.push_back(75);
    sort(m.begin(),m.end());
    printDeque(m);

    
}
int main()
{
    //test1();
    //test2();
    //test3();
    //test4();
    test5();
}