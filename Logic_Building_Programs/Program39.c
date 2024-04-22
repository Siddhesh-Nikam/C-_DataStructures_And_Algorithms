//Fiboniqee series

#include<stdio.h>

void FiboniqeeSeries(int iNo)
{
    int result=0;
    int x=0;
    int y=1;

    for(int i=1;i<=iNo;i++)
    {
        printf("%d\t",x);
        result=x+y;
        x=y;
        y=result;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    FiboniqeeSeries(iValue);

    return 0;
}




