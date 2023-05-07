
class Base
{
   public int A;

   public Base()
   {
	System.out.println("Inside Base Default Constructor");
	this.A = 11;
   }
   public Base(int i)
   {
	System.out.println("Inside Base Parameterised Constructor");
	this.A = i;
   }
   public void fun()
   {
	System.out.println("Inside Base fun");
   }
}

class Derived extends Base
{
	public int A;
	public Derived()
	{
        //base cha parameterised constructor krta yeto
        super(11);                                       //3
		System.out.println("Inside Derived Constructor");
		this.A = 51;
	}
	public void gun()
	{
       	System.out.println("Inside Derived gun");
        System.out.println("Value of A : "+A);   //1
        System.out.println("Value of A : "+super.A);
        System.out.println("Value of A : "+this.A);
        super.fun();                                     //2
    }
}

class SuperDemo
{
	public static void main(String Arg[])
	{		
		Derived dobj = new Derived();    //no casting
		dobj.gun();

		System.out.println(dobj.A);		
	}

}



//super
//1. Access data of parent from child
//2. call method of parent from child
//3. call constructor of parent from child