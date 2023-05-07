#include<iostream>
using namespace std;

//Application for generic programming

template <class T>       //Template Header
T Addition(T i, T j)    //copy of function according to datatype =>Template Instanciacion
{
    T result;           //T - Template Argument
    result = i+ j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;
    int I;

    i = Addition(10, 11);    //copy1   At the time of compilation
    cout<<i<<"\n";

    f = Addition(10.7f, 89.5f);   //copy2
    cout<<f<<"\n";

    d = Addition(10.8, 70.8);    //copy3
    cout<<d<<"\n";

    I = Addition(52, 13);     //copy1
    cout<<I<<"\n";

    return 0;
}