#include <iostream>
#include <stack>
using namespace std;

void test1()
{
    stack<int>stc;
    stc.push(10);
    stc.push(20);
    stc.push(30);
    stc.push(40);
    cout << stc.top() << endl;
    stc.pop();
    cout << stc.top() << endl;
    cout << stc.size();
}

int main()
{
    test1();
}