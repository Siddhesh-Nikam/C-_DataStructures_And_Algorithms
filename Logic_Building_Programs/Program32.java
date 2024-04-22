import java.lang.*;
import java.util.*;

class Program32
{
    public static int SumDigits(int iNo)
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

    public static void main(String arg[])
    {
        int iRet=0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iNo=sobj.nextInt();

        iRet=SumDigits(iNo);

        System.out.println("Sum of all digits is:" + iRet);
    }
}