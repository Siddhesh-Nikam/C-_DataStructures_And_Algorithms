import java.lang.*;
import java.util.*;

class Program27
{
    public static boolean CheckPerfect(int iNo)
    {
        int iSum=0;

        for(int iCnt=1;iCnt<iNo;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }

        if(iSum==iNo)
        {
            return true;
        }

        else
        {
            return false;
        }

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        boolean bRet=false;

        System.out.println("Enter number:");
        int iValue=sobj.nextInt();

        System.out.println("Entered number is:"+iValue);

        bRet=CheckPerfect(iValue);

        if(bRet==true)
        {
            System.out.println(iValue + " is perfect number ");
        }

        else
        {
            System.out.println(iValue + " is not perfect number ");
        }
    }
}