
import java.util.*;

class Collection1
{
    public static void main(String arg[])
    {
        Vector<Integer> lobj = new Vector<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println("Elememts are: "+lobj);

        Iterator iobj = lobj.iterator();

        while(iobj.hasNext());                //hasNext()->true/false
        {
            System.out.println(iobj.next());
        }
    }
}