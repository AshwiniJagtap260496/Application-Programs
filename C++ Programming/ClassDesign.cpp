#include<iostream>
using namespace std;

class MarvellousArray         //size= 8+4=12
{
    private:
      int *Arr;   //pointer
      int iSize;

    public:
      MarvellousArray(int Length)      //constructor
      {
        cout<<"Inside Constructor"<<"\n";
          iSize = Length;
          Arr = new int[iSize];       //In C language => malloc
      } 
      ~MarvellousArray()              //destructor(~ tilda)
      {
        cout<<"Inside Destructor"<<"\n";
        delete[]Arr;
      } 
      void Accept()
      {
        cout<<"Enter the values: \n";
        for(int i=0; i<iSize; i++)
        {
            cin>>Arr[i];
        }
      }
      void Display()
      {
        cout<<"Elements of array are: \n";
        for(int i=0; i<iSize; i++)
        {
            cout<<Arr[i]<<"\n";
        }
      }
      int Addition()
      {
        int iSum = 0;
        for(int i=0; i<iSize; i++)
        {
            iSum = iSum+ Arr[i];
        }
        return iSum;
      }
};

int main()
{
    int iRet = 0;
    MarvellousArray mobj1(6);
    MarvellousArray mobj2(4);

    mobj1.Accept();
    mobj1.Display();
    iRet= mobj1.Addition();
    cout<<"Addition of mobj1 is : "<<iRet<<"\n";
    
    mobj2.Accept();
    mobj2.Display();
    iRet= mobj2.Addition();
    cout<<"Addition of mobj2 is : "<<iRet<<"\n";

    return 0;
}