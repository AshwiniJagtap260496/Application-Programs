#include<iostream>
using namespace std;

class Max
{
    public:
      void Ans(int X, int Y)
      {
        if(X > Y)
        {
            cout<<"Maximum no is : "<<X<<"\n";
        }
        else
        {
            cout<<"Maxinum no is : "<<Y<<"\n";
        }
      }
};

int main()
{
    int A,B;
    cout<<"Enter two numbers"<<"\n";
    cin>>A>>B;

    Max obj;

    obj.Ans(A, B);

    return 0;
}