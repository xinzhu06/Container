#include <iostream>
#include <list>
using namespace std;

void prinfList(const list<int>&l1)
{
    for(const auto&s:l1)
    {
        cout << s << endl;
    }
}

bool mySort(int val,int val2)
{
    return val > val2;
}

void test1()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    prinfList(l1);
    list<int>l2(l1.begin(),l1.end());
    list<int>l3(l1);
    prinfList(l3);
}

void test2()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    list<int>l2(10,100);
    l1.swap(l2);
    prinfList(l1);
    prinfList(l2);

}

void test3()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.insert(++l1.begin(),101);
    l1.insert(++l1.begin(),10,2);
    list<int>l2;
    l2.push_front(78);
    l2.push_front(788);
    l1.insert(l1.begin(),l2.begin(),l2.end());
     
    l1.erase(l1.begin());
    prinfList(l1);  


}

void test4()
{
    list<int>l1;
    l1.push_back(45);
    l1.push_back(6786);
    l1.push_back(867);
    l1.push_back(6);
    l1.push_back(87);
    l1.sort();
    l1.sort(mySort);
    prinfList(l1);
    l1.reverse();
    prinfList(l1);
}

int main()
{
    //test1();
    //test2();
    //test3();
    test4();
}