
class StringDemo
{
    public static void main(String Arg[])
    {
        char Arr[] = {'H','e','l','l','o'};        
        String str1 = new String(Arr);

        String str2 = "Hello";                         //memory => String Literal Pool

        String str3 = new String("Hello");     //memory => Heap

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);

        System.out.println(str1.length());
        System.out.println(str2.length());
        System.out.println(str3.length());
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
String Object = Immutable(don't change/ permonent)
StringBuffer / StringBuilder = Mutable (can change)
 */
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /*
 String Literal Pool
 String s1 = "Marvellous";
 String s2 = "Marvellous";
 String s3 = "Marvellous";

 Memory only 1 time allocated
 refer 3 times
 s1 = s2 =s3 = Marvellous       (reference count = 3)
  */
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*
new keyword
seprate memory allocated for each string
   */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////