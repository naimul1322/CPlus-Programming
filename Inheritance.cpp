#include<iostream>
using namespace std;

class person{
public:
string name;
int age;

 person(string x,int y)
{
    name=x;
    age=y;
}

void display()
{
    cout<<name<<endl;
    cout<<age<<endl;
}

};
class student:public person {
    public:
int id;

void display2()
{
    display();
    cout<<id<<endl;
}
};

int main()
{
   person p1("naimul",25);
    p1.display();

   student s1();
//    s1.display2();

}
