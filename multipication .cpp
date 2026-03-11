#include<iostream>
using namespace std;

int main()
{
  while(1)
  {
        int i,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1; i<=10; i++)
    {
        cout<<n<<"X"<<i <<"="<< n*i<<endl;
    }

  }
}
