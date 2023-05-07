#include<iostream>
using namespace std;

template <class T>
class MarvellousArray         //size= 8+4=12
{
    private:
      T *Arr;   //pointer
      int iSize;

    public:      
      MarvellousArray(int Length)      //constructor
      {
        cout<<"Inside Constructor"<<"\n";
          iSize = Length;
          Arr = new T[iSize];       //In C language => malloc
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
      T Addition()
      {
        T iSum = 0;
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
    float fRet = 0.0f;
    MarvellousArray <int> mobj1(6);
    MarvellousArray<float> mobj2(4);

    mobj1.Accept();
    mobj1.Display();
    iRet= mobj1.Addition();
    cout<<"Addition of mobj1 is : "<<iRet<<"\n";
    
    mobj2.Accept();
    mobj2.Display();
    fRet= mobj2.Addition();
    cout<<"Addition of mobj2 is : "<<fRet<<"\n";

    return 0;
}