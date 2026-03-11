#include<iostream>
using namespace std;
int main()
{
   while(1)
   {
        try{

    double a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    if (b==0)
    {
        throw -1;
    }

    double result =(double)a /b;
    cout<<"the result is :"<<result<<endl;

    }
    catch(...)
    {
        cout<<"please try again"<<endl;
    }

   }
}
