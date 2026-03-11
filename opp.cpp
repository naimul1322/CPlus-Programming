#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }

    void setvalue(int x, double y)
    {
        id=x;
        gpa=y;
    }


};

int main()
{

    student alim,akash;
    alim.setvalue(101,4.56);
    alim.display();


  akash.setvalue(102,4.23);
    akash.display();



}
