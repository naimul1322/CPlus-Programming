#include<iostream>
using namespace std;

class student
{
    public:

    int id;
    double gpa;
    void display()
    {

        cout<<id<<endl;
        cout<<gpa<<endl;
    };


    student(int y,double z)
    {
    //  name=x;
        id=y;
        gpa=z;
    }
};

int main()
{

    student akash(101,4.56);
    akash.display();

}
