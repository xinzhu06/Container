#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int> &set)
{
    for(const auto &s : set)
    {
        cout << s << " ";
    }
    cout << endl;
}

void test1()
{
    set<int>set1;
    set1.insert(10);
    set1.insert(20);
    set1.insert(30);
    set1.insert(40);
    set1.insert(50);
    set<int>set2(set1);
    printSet(set2);
    cout << set1.size() ;

}

void test2()
{
    set<int>set1;
    set1.insert(10);
    set1.insert(20);
    set1.insert(30);
    set1.insert(40);
    set1.insert(50);
    set<int>set2;

    set2.insert(100);
    set1.swap(set2);
    printSet(set1);
    printSet(set2);

}

void test3()
{
    set<int>set1;
    set1.insert(10);
    set1.insert(20);
    set1.insert(30);
    set1.insert(40);
    set1.insert(50);
    set1.erase(set1.begin());

}

void test4()
{
    set<int>set1;
    set1.insert(10);
    set1.insert(20);
    set1.insert(30);
    set1.insert(40);
    set1.insert(50);
    auto pos = set1.find(30);
    cout << *pos << endl; 
    int num = set1.count(10);
    cout << num;
}

void test5()
{
    set<int>s1;
    pair<set<int>::iterator,bool>ret = s1.insert(100);
    if (ret.second)
    {
        cout << "success" << endl;
    }
    
}

int main()
{
    //test1();
    //test2();
    //test4();
    test5();
}