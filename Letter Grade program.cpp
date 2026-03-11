#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the mark:"<<endl;
    cin>>mark;

    if(mark>100)
    {
        cout<<"Invalid mark"<<endl;
    }else if(mark<0)
    {
        cout<<"Invalid mark"<<endl;
    }else if(mark>=80)
    {
        cout<<"A+"<<endl;
    }else if(mark>=70)
    {
        cout<<"A"<<endl;
    }else if(mark>=60)
    {
        cout<<"A-"<<endl;
    }else if(mark>=50)
    {
        cout<<"B"<<endl;
    }else if(mark>=40)
    {
        cout<<"C"<<endl;
    }else if(mark>=33)
    {
        cout<<"D"<<endl;
    }else if(mark<33)
    {
        cout<<"F"<<endl;
    }

    return 0;
}
