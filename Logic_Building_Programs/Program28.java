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

    int iSum=0;

    public boolean CheckPerfect()
    {
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
}


class Program28
{
    public static void main(String arg[])
    {
        Number nobj = new Number();

        boolean bRet=false;

        nobj.Accept();

        nobj.Display();
    
        bRet=nobj.CheckPerfect();
    
        if(bRet==true)
        {
            System.out.println("Given number is perfect number");
        }
    
        else
        {
            System.out.println("Given number is not perfect number");
        }
    }
}

        