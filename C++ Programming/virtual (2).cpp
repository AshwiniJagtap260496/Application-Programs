#include<iostream>
using namespace std;

class base1
{
    public:
       int i;
       float f;      
       virtual void gun() = 0;
       virtual void sun() = 0;       
       virtual void run()
       {
        cout<<"base1 run\n";
       }
};

class base2
{
    public:
       int j;
       float g;      
       virtual void mun() = 0;
       virtual void fun() = 0;
};

class derived : public base1, public base2
{
    public:
       int i;
       double d;
       void sun()
       {
        cout<<"sun of derived\n";
       }
       void fun()
       {
        cout<<"fun of derived\n";
       }
       void gun()
       {
        cout<<"gun of derived\n";
       }
       void mun()
       {
        cout<<"Derived mun\n";
       }
};

int main()
{
    cout<<"main\n";
    derived dobj;

    base1 *bp = new base1;
    bp ->run();

    dobj.gun();
    dobj.sun();
    dobj.run();
    dobj.mun();
    dobj.fun();
    
    return 0;
}