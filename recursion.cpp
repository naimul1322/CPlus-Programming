#include<iostream>
using namespace std;

int fact (int i)
{
    if(i<=1)
    {
        return 1;
    }
    return i* fact(i-1);
}

int main()
{
    int i=6;
    cout<<fact(i);
}
