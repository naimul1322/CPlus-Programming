#include<iostream>
#include<cstdlib>
using namespace std;

 int main()
 {
     while(1)
     {
         int gussnumber;
     cout<<"Enter the Guss number 1 to 5"<<endl<<endl;
     cin>>gussnumber;

     int randomnumber = rand()%5+1;

     if(gussnumber==randomnumber)
     {
         cout<<"You have win the match"<<endl;
     }

     else{
        cout<<"You loss and please try again"<<endl<<endl;
        cout<<"Enter the random number:"<<" "<<randomnumber<<endl<<endl;
     }
     }
 }
