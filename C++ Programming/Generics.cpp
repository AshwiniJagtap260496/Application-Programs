using namespace std;
#include<iostream>
//Application for specific programming
int AdditionI(int i, int j)
{
    int result;
    result = i + j;
    return result;
}

float AdditionF(float i, float j)
{
    float result;
    result = i + j;
    return result;
}

double AdditionD(double i, double j)
{
    double result;
    result = i + j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;

    i = AdditionI(10, 11);
    cout<<i<<"\n";

    f = AdditionF(10.7f, 89.5f);
    cout<<f<<"\n";

    d = AdditionD(10.8, 70.8);
    cout<<d<<"\n";

    return 0;
}

//Generics in c++ => Templates

/*
______________ Addition(____ i, ____ j)
{
    __________ result;
    result = i+ j;
    return result;
}
*/
/*

template <class T>
T Addition(T i, T j)
{
    T result;
    result = i+ j;
    return result;
}

*/