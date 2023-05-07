#include<iostream>
using namespace std;

class Demo
{
    public:
      int A, B;
    Demo(int i=10, int j=20)    //parameterised constructor with default arguments
      {
        A=i;
        B=j;
      }
};

int main()
{
    Demo obj1;    //10, 20
    Demo obj2(11);    //11, 20
    Demo obj3(11, 21);   //11,21

    cout<<obj1.A<<"\n";
    cout<<obj1.B<<"\n";

    
    cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";

     
    cout<<obj3.A<<"\n";
    cout<<obj3.B<<"\n";

    return 0;
}