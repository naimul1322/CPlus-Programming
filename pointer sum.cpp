#include<iostream>
using namespace std;

int main()
{
    int num1=10,num2=30;
    int *p1,*p2;
    p1=&num1;
    p2=&num2;

    int sum=*p1+*p2;
    int sub=*p1-*p2;
    int mul=*p1* *p2;
    int div=*p1/ *p2;

    cout<<sum<<endl;
    cout<<sub<<endl;
    cout<<mul<<endl;
    cout<<div<<endl;
}
