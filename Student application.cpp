#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    cout<<"Enter the marks"<<endl;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum=sum+ara[i];
    }
    cout<<"total marks"<<sum<<endl;
    float avg= (float)sum/n;
    cout<<"total avarage"<<avg<<endl;

     int max = ara[0];
     int min = ara[0];

     for(i=1; i<n; i++)
     {
         if(max<ara[i])
         {
             max=ara[i];
         }
         if(min>ara[i])
         {
             min=ara[i];
         }
     }

     cout<<max<<endl;
     cout<<min;




}
