#inclde<iostream>
using namespace std;

class Base    //Abstract class
{
    public:
      int A, B;

      int Addition( int i, int j)    //Concrete class
      {
        return i+j;
      }
      virtual Substraction(int i, int j)   //concrete class
      {
        return i-j;
      }
      virtual int Multiplication(int i, int j) = 0;   //Abstract function
};

class Derived : public Base
{
    public:
       int X, Y;

       int Substraction( int i, int j)
       {
        int Ans - 0;
        Ans = i-j;
        return Ans;
       }

       int Multiplication( int i, int j)
       {
        return i*j;
       }

};

int main()
{
    Base *bp = new Derived;
    int Ret = 0;

    Ret = Addition(10, 11);
    cout<<" Addition is : "<<Ret<<"\n";

    Ret = Substraction(10, 11);
    cout<<"Substraction is : "<<Ret<<"\n";

    Ret = Multiplication(10, 11);
    cout<<"Multiplication is : "<<Ret<<"\n";

    return 0;

}