#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

class Person
{
public:
    Person(string name,int score)
    {
        this->m_name = name;
        this->m_score = score;
    }
    int m_score;
    string m_name;
};

void creatPerson(vector<Person> &v)
{
    string seed = "FUCKYOU";
    for (int i = 0; i < 7; i++)
    {
        string name = "Contestant";
        name = name + seed[i];
        int score = 0;
        Person p(name,score);
        v.push_back(p);
    }
    
}

void printVector(vector<Person>v1)
{
      for (vector<Person>::iterator it = v1.begin();it != v1.end();it++)
      {
        cout << "name:" << (*it).m_name << " " << "score:" << (*it).m_score << endl;
      }
      
}

void printDeque(deque<int> &d)
{
      for (deque<int>::iterator it = d.begin();it != d.end();it++)
      {
        cout << *it <<  " ";
      }
      cout << endl;
      
}

void setScore(vector<Person>&v1)
{
    for ( vector<Person>::iterator it = v1.begin();it != v1.end();it++)
    {
        deque<int>d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 101;
            d.push_back(score);
        }
        sort(d.begin(),d.end());
        //printDeque(d);
        d.pop_back();
        d.pop_front();
        int sum = 0;
        for (deque<int>::iterator itd = d.begin();itd != d.end();itd++)
        {
            sum += *itd; 
        }
        int average = sum / d.size();
        it->m_score = average;
    }
    
    
}

int main()
{
    srand((unsigned int )time(nullptr));
    vector<Person>v1;
    creatPerson(v1);
    setScore(v1);
    printVector(v1);
}