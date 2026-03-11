#include<iostream>
using namespace std;

int main()
{
    int n, i;
     cout<<"Enter value:"<<endl;
     cin>>n;
     int ara[n+4];
     for(i=0; i<n; i++)
     {
         cin>>ara[i];
     }

     int serach;
     cout<<"Enter the search number:"<<endl;
     cin>>serach;

    int left,right,mid;
    left=0;
    right=n-1;
    while (left<=right)
    {
         mid=(left+right)/2;
        if(ara[mid]==serach)
        {
            cout<<"data found "<<mid<<endl;
            return 0;
        }
        else if(ara[mid]<serach)
        {
            left=mid+1;
        }
        else
            right=mid-1;
    }

cout<<"item is not found"<<endl;




    return 0;
}
