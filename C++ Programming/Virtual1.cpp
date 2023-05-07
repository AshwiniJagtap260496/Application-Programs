#include<iostream>
using namespace std;

class Base
{
    public:
       int A, B;
       virtual void Fun()    //1000
       {
        cout<<"Inside Fun\n";
       }
        virtual void Gun()   //2000
       {
        cout<<"Inside Gun\n";
       }
        virtual void Sun()   //3000
       {
        cout<<"Inside Sun\n";
       }
};

class Derived : public Base
{
    public:
       int X, Y;
       void Fun()   //4000
       {
        cout<<"Inside Fun of Derived \n";
       }
        void Gun()    //5000
       {
        cout<<"Inside Gun of Derived \n";
       }
        void Sun()   //6000
       {
        cout<<"Inside Sun of Derived \n";
       }    

};

int main()
{
    Base *bp = new Derived;    //upcasting

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    
    bp-> Fun();
    bp-> Gun();
    bp-> Sun();
    
    return 0;
}