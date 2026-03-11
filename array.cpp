#include<iostream>
using namespace std;

int main()
{
    int i,num,count=-1;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int ara[num+4];
    for(i=0; i<num; i++)
    {
        cin>>ara[i];
    }

    int serach;
    cout<<"Enter the serach number:"<<endl;
    cin>>serach;

    for(i=0; i<num; i++)
    {
        if(ara[i]==serach)
        {
            count=i;
            break;
        }
    }
    if(count==-1)
    {
        cout<<serach<<" " <<"data not found in this array"<<endl;
    }
    else{
        cout<<serach<<" "<<"data is found in this array in index"<<i<<endl;
    }
}
