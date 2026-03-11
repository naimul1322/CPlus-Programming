#include<iostream>
using namespace std;

class student
{
public:

    string name;
    int id;
    double gpa;

    void display()
    {
        cout<<"name:"<<name<<" " <<id<<" "<<gpa;

    }

    student(string x,int y, double z)
    {
        name=x;
        id=y;
        gpa=z;
    }
};

int main()
{
    student anis('naumul',101,3.56);
    anis.display();
}
