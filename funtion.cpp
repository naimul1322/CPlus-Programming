#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
void sub(int a,int b)
{
    int sub=a-b;
    cout<<sub<<endl;
}
void mul(int a,int b)
{
    int mul=a*b;
    cout<<mul<<endl;
}
void divison(int a,int b)
{
    int div=a/b;
    cout<<div<<endl;
}

int main()
{
    add(10,30);
    add(170,30);
    sub(170,30);
    mul(170,30);
    divison(170,30);

}
