#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i;
    for(i=0; i<5; i++)
    {
        int rnumber= rand();
        cout<<"Random number ="<<rnumber<<endl;
    }
}
