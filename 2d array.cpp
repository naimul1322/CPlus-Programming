#include<iostream>
using namespace std;

 int main()
 {
     int ara[3][4];
     int i,j;
     for(i=0; i<3; i++)
     {
         for(j=0; j<4; j++)
         {
             cin>>ara[i][j];
         }
         cout<<endl;
     }

      for(i=0; i<3; i++)
     {
         for(j=0; j<4; j++)
         {
             cout<<ara[i][j]<<"  ";
         }
         cout<<endl;
     }
 }
