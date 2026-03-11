#include<iostream>
using namespace std;
int main()
{
    int n,i,count=-1;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    int ara[n+4];

    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    int serach;
    cout<<"Enter the search number:"<<endl;
    cin>>serach;

    for(i=0; i<n; i++)
    {
        if(ara[i]==serach)
        {
            count=i;
            break;
        }
    }
    if(count==-1)
    {
        cout<<"number is not exsit"<<endl;
    }
    else
    {
        cout<<"number is index:"<<i<<endl;
    }





    return 0;
}
