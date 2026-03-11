#include<iostream>
using namespace std;

 void sum(int a,int b,int c)
 {
     int sum=a+b+c;
     cout<<sum<<endl;
 }
 void sum(int a,int b)
 {
     int sum=a+b;
     cout<<sum<<endl;
 }

 int main()
 {
     sum(10,50);
     sum(10,30,40);
 }
