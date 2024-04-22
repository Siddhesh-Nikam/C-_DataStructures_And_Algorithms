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
        System.out.println("Entered number is:" + iNo);
    }

    public void FibonacciSeries()
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
}

class Program44
{
    
    public static void main(String arg[])
    {
        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();
        nobj.FibonacciSeries();

    }
}