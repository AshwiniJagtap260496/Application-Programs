import java.util.*;

class ArrayWhile
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];    

//Iteration Syntax = for loop
        System.out.println("Enter the elements");
        int iCnt = 0;
        while(iCnt< iSize)
        {
            Arr[iCnt] = sobj.nextInt();
            iCnt++;
        }

        System.out.println("Elements of Array are ");
        iCnt = 0;
        while(iCnt < iSize)
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }
    }
}