import java.util.*;

class Input
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number : ");
        int iNo1 = sobj.nextInt();                        //nextInt method only accepts Integer

        System.out.println("Enter Second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1 + iNo2;
        System.out.println("Additionnis : "+iAns);

       // sobj.close();     if warning occurs
    }
}