
import java.util.*;

class Collection4
{
    public static void main(String arg[])
    {
        Stack <Integer> lobj = new Stack<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println("Elememts are: "+lobj);

        System.out.println("Poped element is: "+lobj.pop());

        System.out.println("Elements are: "+lobj);
    }
}