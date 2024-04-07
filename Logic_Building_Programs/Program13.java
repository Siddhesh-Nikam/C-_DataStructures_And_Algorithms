//Factorial Code

import java.lang.*;
import java.util.*;

class Program13
{
    static int Factorial(int iNo)
    {
        int iFact=1;

        for(int iCnt=1;iCnt<=iNo;iCnt++)
        {
            iFact=iFact*iCnt;
        }
        return iFact;
    }

    public static void main(String arg[])
    {
        int iValue =0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        int iRet= Factorial(iValue);

        System.out.println("Factorial of " + iValue + " is : " + iRet);


    }
}