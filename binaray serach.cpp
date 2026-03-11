#include<iostream>
 using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the values:"<<endl;
    cin>>n;
    int ara[n+4];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    int serach;
    cout<<"Enter the serach number:"<<endl;
    cin>>serach;

    int left , right , mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(ara[mid]==serach)
        {
            cout<<mid<<endl;
        }
        else if(ara[mid]<serach)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout<<"Data not found:"<<endl;

}
