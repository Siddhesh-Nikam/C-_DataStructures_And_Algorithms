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

    public boolean CheckPrime()
    {
        for(int iCnt=2;iCnt<iNo;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                return true;
            }   
        }
        return false;
    }
};

class Program23
{
    public static void main(String arg[])
    {
        Number nobj = new Number();
        boolean bRet=false;

        nobj.Accept();
        nobj.Display();

        bRet=nobj.CheckPrime();

        if(bRet==true)
        {
            System.out.println("Given is not prime number");
        }

        else
        {
            System.out.println("Given is prime number");
        }
    }
}