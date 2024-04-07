import java.lang.*;
import java.util.*;

class Program16
{
    public static int Power(int iBase,int iRaise)
    {
        int iAns=1;

        for(int iCnt=1;iCnt<=iRaise;iCnt++)
        {
            iAns=iAns*iBase;
        }
        return iAns;
    }

    public static void main(String arg[])
    {
        int iBase =0,iRaise=0;
        int iRet=0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter base number:");
        iBase=sobj.nextInt();

        System.out.println("Enter raise number:");
        iRaise=sobj.nextInt();

        iRet=Power(iBase,iRaise);

        System.out.println("Answer is:"+iRet);

    }
}