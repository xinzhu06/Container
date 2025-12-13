#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Person
{
public:

    string name;
    int age;

};

void test1()
{

    queue<int>qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    if(!qu.empty())
    {
        cout << qu.front() << endl;
        cout << qu.back() << endl;
        qu.pop();
        cout << qu.front() << endl;
        cout << qu.back() << endl;
    }
    else{
        cout << "empty";
    }
    cout << qu.size();
}

int main()
{
    test1();
}