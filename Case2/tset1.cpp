#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Worker
{
public:
    // Worker(int salary,string name)
    // {
    //     this->m_salary = salary;
    //     this->m_name = name;
    // }
    int m_salary;
    string m_name;
};

void printVector(const vector<Worker>&v)
{
    for(const auto&s : v)
    {
        cout << s.m_name << " " << s.m_salary << endl;
    }
}

void setWorker(vector<Worker>&v)
{
    string nameSeed = "ABCDEFGHIJ";
    Worker w1;
    for(int i = 0;i < nameSeed.size();i++)
    {
        w1.m_name = "Worker";
        w1.m_salary = rand()%10000 + 20000;
        w1.m_name += nameSeed[i];
        v.push_back(w1);
    }
}

int main()
{
    srand(time(nullptr));
    vector<Worker>v;
    setWorker(v);
    printVector(v);

}