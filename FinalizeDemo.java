
class Marvellous   //class Marvellous extends Object
{
    public int No1;
    public int No2;
    public Marvellous()
    {
        System.out.println("Inside default constructor");
        No1 = 0;
        No2 = 0;
    }
    public Marvellous(int a, int b)
    {
        System.out.println("Inside parameterised constructor");
        No1 = a;
        No2 = b;
    }
    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}

class FinalizeDemo   //class GetClassDemo extends Object
{
    public static void main(String Arg[])
    {
        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2 = new Marvellous(11,21);

        mobj1 = null;     //you are not interested in mobj1
        mobj2 = null;     //c++ ->destructor()
        System.gc();   //request to garbage collector
                
    }
}

/*
garbage collector immediately yeilch asa nahi 
yeil nakki pn lgechch chi garentee nahi
 */

 /*
c++ = destructor calling assured
java = finalize calling assurity nahi
  */