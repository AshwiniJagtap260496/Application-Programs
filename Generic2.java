//Generic Method

class Generic2
{
    public static <T> void Display(T Arr[])
    {
        for(T no:Arr)                             //foreach only in java
        {
            System.out.println(no);
        }
        /*for(int i = 0; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
        */
    }

    public static void main(String Arg[])
    {
        Integer A[] = {10, 20, 30, 40};   //wrapper class
        Float B[] = {50.89f, 60.90f, 70.88f};
        Double C[] = {50.45, 60.44, 70.56};

        Display(A);
        Display(B);
        Display(C);
    }
}