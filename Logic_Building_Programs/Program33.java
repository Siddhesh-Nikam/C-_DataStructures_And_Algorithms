import java.lang.*;
import java.util.*;

class Number
{
    public int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number:");
        iNo=sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Entered number is :" + iNo);
    }

    public int SumDigits()
    {
        int iDigit=0,iSum=0;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        return iSum;
    }
}

class Program33
{
    public static void main(String arg[])
    {
        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();

        int iRet=0;

        iRet=nobj.SumDigits();

        System.out.println("Sum of all digits is:" + iRet);
    }
}