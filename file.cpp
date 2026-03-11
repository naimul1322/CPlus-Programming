#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   while (1)
   {
        string name;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);
//   file <<"I am a man. i am a student file."<<endl;
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    file<<name<<endl;

    file.close();
   }

    return 0;
}
