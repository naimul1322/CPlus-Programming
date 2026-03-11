#include<iostream>
using namespace std;

class person
{
public :
    string name;
    int age;

 void   pn(string x, int y)
    {
        name=x;
        age=y;

    }
    void display()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is : "<<age<<endl;
    }

};

class teacher : public person
{
    public:

    double salary ;

    void display2()
    {
        display();
        cout<<"Salary is :"<<salary<<endl;
    }

};



int main()
{
    person p1;
    p1.name="naimul islam";
    p1.age=26;
    p1.display();

cout<<endl;
   teacher t1;
   t1.name="akash";
   t1.age=25;
    t1.salary=2563.326;
    t1.display2();
}
