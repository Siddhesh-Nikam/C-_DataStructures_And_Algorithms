// Input :  4
// Output :     -4   -3  -2  -1  0   1   2   3   4
// O(2N)

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue =0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


