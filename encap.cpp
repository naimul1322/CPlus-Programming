#include<iostream>
using namespace std;

class student {

private:
    string name;
public :
    void setname(string x)
    {
        name=x;
    }
    string getname()
    {
        return name;
    }

};


int main()
{
    student s;
    s.setname("konika");
   // cout<<s.setname;
   cout<<s.getname();

}
