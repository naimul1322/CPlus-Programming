#include<iostream>
using namespace std;

int main()
{
    int i,j,n,temp=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int ara[n+6];
    cout<<"Enter the number in array list:"<<endl;
    for(i=0; i<n; i++)
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

    cout<<"Ascending order list data "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }


}
