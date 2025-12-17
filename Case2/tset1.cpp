#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

#define Art 0
#define Maker 1
#define Creater 2

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
        w1.m_salary = rand()%10001 + 10000;
        w1.m_name += nameSeed[i];
        v.push_back(w1);
    }
}

void creatMap(multimap<int,Worker> &m,vector<Worker>v)
{
    
    for(auto const&s : v)
    {
        int seed = rand()%3;
        m.insert(make_pair(seed,s));
    }
    
}

void printMap(multimap<int,Worker>&m1)
{
    cout << "Workers in Art group:\n";
    auto pos = m1.find(Art);
    int count = m1.count(Art);
    int index = 0;
    for(;pos != m1.end() && index < count ;pos++,index++)
    {
        cout << "name: "<< pos->second.m_name << " " << "salary: " << pos->second.m_salary << endl;
    }
    cout << "-------------------------" << endl;
    cout << "Workers in Maker group:\n";
    pos = m1.find(Maker);
    count = m1.count(Maker);
    index = 0;
    for(;pos != m1.end() && index < count ;pos++,index++)
    {
        cout << "name: "<< pos->second.m_name << " " << "salary: " << pos->second.m_salary << endl;
    }
    cout << "-------------------------" << endl;
    cout << "Workers in Creater group:\n";
    pos = m1.find(Creater);
    count = m1.count(Creater);
    index = 0;
    for(;pos != m1.end() && index < count ;pos++,index++)
    {
        cout << "name: "<< pos->second.m_name << " " << "salary: " << pos->second.m_salary << endl;
    }
}

int main()
{
    srand(time(nullptr));
    vector<Worker>v;
    setWorker(v);
    multimap<int,Worker>m1;
    creatMap(m1,v);
    printMap(m1);

}