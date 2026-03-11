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
    cout<<"Enter the serach number:"<<endl;
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
        cout<<serach<<" "<<"data is not found"<<endl;
    }
    else{

        cout<<serach<<""<<"data is found in index:"<<i<<endl;
    }


}
