#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the mark: " <<endl;
    cin>>mark;


   if(mark>32)
   {
        if(mark>=80){
            cout<<"A+\n";

        }if(mark>=70){
            cout<<"A-\n";

        }if(mark>=60){
            cout<<"A\n";

        }if(mark>=50){
            cout<<"B\n";

        }if(mark>=40){
            cout<<"C\n";

        }if(mark>=33){
            cout<<"D\n";

        }
   }
   else
   {
       cout<<"Fail"<<endl;
   }

}
