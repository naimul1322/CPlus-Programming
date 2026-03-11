#include<iostream>
using namespace std;

int main()
{
    int x=20;
   int y=10;
   cout<<"X="<< x <<"\n";
   cout<<"Y="<<y<<"\n";
   int temp;
   temp=x;
   x=y;
   y=temp;
   cout<<"X="<<x<<"\n";
   cout<<"Y="<<y<<"\n";
    getchar();
}
