#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp=0;
    cout<<"Enter the values:"<<endl;
    cin>>n;
    int ara[n+4];
    for (i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j+1];
                ara[j+1]=ara[j];
                ara[j]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<"sorting ara is:"<<ara[i];
        cout<<"\n";
    }


    return 0;
}
