#include<iostream>
using namespace std;

class Demo
{
    public:
       int A, B;
       static int X, Y;

       Demo()
       {
        A= 0;
        B= 0;
       }
       
};

int Demo:: X= 10;
int Demo:: Y= 20;

int main()
{
    cout<<"Value of x : "<<Demo::X<<"\n";
    cout<<"Value of Y : "<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;
    cout<<"Size of demo class object is : "<<sizeof(obj1)<<"\n";
    return 0;
}