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

    public int Factorial()
    {
        int iFact=1;
        for(int iCnt=1;iCnt<=iNo;iCnt++)
        {
            iFact=iFact*iCnt;
        }
        return iFact;
    }
}

class Program20
{
    public static void main(String arg[])
    {
        Number nobj = new Number();
        int iRet=0;

        nobj.Accept();
        nobj.Display();

        iRet=nobj.Factorial();

        System.out.println("Factorial is : "+iRet);


    }
}