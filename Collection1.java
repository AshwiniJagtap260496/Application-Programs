import java.util.LinkedList;

import java.util.*;

class Collection1
{
    public static void main(String arg[])
    {
        LinkedList<Integer> lobj = new LinkedList<Integer>();

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