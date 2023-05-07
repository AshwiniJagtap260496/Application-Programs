#include<iostream>
//using namespace std;

namespace Marvellous   //user defined namespace
{

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
}
namespace Infosystems   //user defined namespace
{

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
}

//using namespace Marvellous;

int main()
{
 Marvellous::Demo obj1; 
 //Demo obj1;
  Infosystems::Demo obj2;
  
 std::cout<<"Inside main"<<"\n";
    
    return 0;
}