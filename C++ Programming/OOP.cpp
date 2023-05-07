//class= characteristics + behaviours
//class= data + functions

#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        void fun()
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.No1 = 10;
    obj1.No2 = 20;

    obj2.No1 = 30;
    obj2.No2 = 40;

    cout<<"Size of Demo :"<<sizeof(obj1)<<"\n";
    cout<<obj1.No2<<"\n";

    obj1.fun();

    return 0;
}