#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
public:
    double dim1, dim2;

    shape(double dim1, double dim2)
    {
        this -> dim1 =dim1;
        this -> dim2 =dim2;
    }
    virtual  double area()
    {
        return 0;
    }
};

class triangle : public shape
{

public :
    triangle (double dim1, double dim2)
    :shape(dim1,dim2)
    {

      //  this -> dim1= dim1;
       // this -> dim2= dim2;
    }
    double area()
    {
        return 0.5*dim1*dim2;

    };
    class rectangle : public shape
    {

    public :
        rectangle (double dim1, double dim2)
        :shape (dim1,dim2)
        {

         //   this -> dim1= dim1;
           // this -> dim2= dim2;
        }
       double area()
        {
            return dim1*dim2;

        };
int main()
{
      shape *s;
            triagle t(10,20);
            rectangle r(10,20);
            s= &t;
            cout<<"Triangle is:"<<s  -> area()<<endl;

            s= &r;
            cout<<"rectange is:"<<s ->area()<<endl;
            getch();
           // triangle t(10,20);
            //cout<<t<<endl;
}

