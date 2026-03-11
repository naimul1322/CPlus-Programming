#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"the number is big:"<<num1<<endl;

    } else if(num2>num1&& num2>num3)
    {
        cout<<"the number is big:"<<num2<<endl;

    }
    else
    {
        cout<<"the number is big:"<<num3<<endl;
    }


    return 0;
}
