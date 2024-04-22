import java.lang.*;
import java.util.*;

class Program26
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iValue=sobj.nextInt();

        System.out.println("Entered number is:"+iValue);

        int iSum=0;

        for(int iCnt=1;iCnt<iValue;iCnt++)
        {
            if((iValue%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }

        if(iSum==iValue)
        {
            System.out.println(iValue + " is perfect number ");
        }

        else
        {
            System.out.println(iValue + " is not perfect number ");
        }

    }
}