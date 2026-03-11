#include<iostream>
using namespace std;

int main()
{
    int  i,sum=0,n;
    cout<<"Enter your choice"<<endl;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        sum=sum+i*i;
    }
    cout<<sum<<endl;
}
