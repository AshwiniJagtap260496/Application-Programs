
class Marvellous   //class Marvellous extends Object
{
    public int No1;
    public int No2;
}
class HashCodeDemo   //class GetClassDemo extends Object
{
    public static void main(String Arg[])
    {
        Marvellous mobj = new Marvellous();
        System.out.println("HashCode of mobj is : "+mobj.hashCode());    //unique hashCode
    }
}