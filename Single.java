
class Base
{
   public int A;
   public int B;

   public Base()
   {
	System.out.println("Inside Base Constructor");
	this.A = 11;
	this.B = 21;
   }
   public void fun()
   {
	System.out.println("Inside Base fun");
   }
}

class Derived extends Base
{
	public int X;
	public int Y;
	public Derived()
	{
		System.out.println("Inside Derived Constructor");
		this.X = 51;
		this.Y = 101;
	}
	public void gun()
	{
		System.out.println("Inside Derived gun");
	}
}

class Single
{
	public static void main(String Arg[])
	{		
		Derived dobj = new Derived();    //no casting
		dobj.fun();
		dobj.gun();

		System.out.println(dobj.A);
		System.out.println(dobj.B);
		System.out.println(dobj.X);
		System.out.println(dobj.Y);		
	}

}


//Base bobj = new Base();          //no casting
//Base bobj2 = new Derived();      //upcasting
//Derived dobj2 = new Base();       //downcasting