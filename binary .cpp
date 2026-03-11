#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ara[n+5];
    cout<<"Enter the ascending number"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    int s_num;
    cout<<"Enter the serach number:"<<endl;
    cin>>s_num;


    int left ,right,mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(ara[mid]==s_num)
        {
            cout<<"data is found in index"<<" "<<mid<<endl;
            return 0;
        }
        else if(ara[mid]<s_num)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }

    }
    cout<<"data not found in index"<<endl;


}
