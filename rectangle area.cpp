#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,s,d;
    cin>>a;
    cin>>s;
    cin>>d;
    if(a>s && a>d)
    {
        cout<<a<<endl;
    }
    else if(s>a && s>d)
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<d<<endl;
    }

}
