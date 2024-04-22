import java.lang.*;
import java.util.*;

class Program43
{
    public static void FibonacciSeries(int iNo)
    {
        int x=0;
        int y=1;
        int result=0;
        
        for(int i=1;i<=iNo;i++)
        {
            System.out.println(x);
            result=x+y;
            x=y;
            y=result;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iValue=sobj.nextInt();

        FibonacciSeries(iValue);
    }
}