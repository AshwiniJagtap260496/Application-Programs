
abstract class RBI   //cannot create object of abstract class
{
    public abstract  float CalculateROI();
       //virtual float CalculateROI() = 0;    in c++
    public void DisplayRules()
    {
        System.out.println("You have to submit Aadhar card and PAN card");
        System.out.println("Minimum balance is 10,000");
    }
}
class SBI extends RBI
{
    public float CalculateROI()
    {
        return 5.7f;
    }
}
class BOM extends RBI    //BOM = Bank of Maharashtra
{
    public float CalculateROI()
    {
        return 7.7f;
    }
}
class AbstractDemo
{
    public static void main(String Arg[])
    {
       // RBI robj = new RBI();      //error

        SBI sobj = new SBI();
        BOM bobj = new BOM();
        sobj.DisplayRules();
        bobj.DisplayRules();
        
        float fRet = 0.0f;
        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI : "+fRet);
        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM : "+fRet);
    }
}