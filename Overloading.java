 //inheritance aahe  -> every class is automatically inherited from  Object class 

 /*
  * class Object
  {
    //code
  }
  */
class Demo            //class Demo extends Object
{
    public int Addition(int a, int b)          
    {
        return a+b;
    }
    public int Addition(int a, int b, int c)
    {
        return a+b+c;
    }
    public double Addition(double a, double b) //name mangling hota
    {
        return a+b;
    }
    public double Addition(double a, double b, double c)
    {
        return a+b+c;
    }
}
class Overloading
{
    public static void main(String Arg[])
    {
        Demo obj = new Demo();
        int A=10, B=20, C=30, iRet=0;
        double X=10.8, Y=90.7, Z=70.9, dRet=0.0;

        iRet= obj.Addition(A, B);
        System.out.println("Addition is : "+iRet);
        iRet = obj.Addition(A, B, C);
        System.out.println("Addition is : "+iRet);

        dRet = obj.Addition(A, B);
        System.out.println("Addition is : "+iRet);
        dRet = obj.Addition(A, B, C);
        System.out.println("Addition is : "+dRet);
    }
}