#include<iostream>
using namespace std;

//Parent class
class Demo
{
    public:
        int A, B;

        Demo()
        {
            cout<<"Inside Demo Constructor"<<"\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo"<<"\n";
        }         
};

//Child class
class Hello : public Demo   //Java -> class Hello extends Demo
{
    public:
       int X, Y;

       Hello()
       {
         cout<<"Inside Hello Constructor"<<"\n";
       }
       void gun()
       {
         cout<<"Inside gun of Hello"<<"\n";
       }
};

int main()
{
    Hello hobj;
    

    return 0;
}