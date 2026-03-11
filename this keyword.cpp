#include<iostream>
using namespace std;

class student {

public:
    string name;
    int id;
    double salary;


    void setname(string name, int id, double salary)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
    }

   void display()
   {
       cout<<name<<endl;
       cout<<id<<endl;
       cout<<salary<<endl;
   }


};


int main()
{
    student s1;
    s1.setname("Hamim",101,1000.256);
    s1.display();

}
