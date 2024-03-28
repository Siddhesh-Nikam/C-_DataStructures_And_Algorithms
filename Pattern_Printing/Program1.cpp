// Input :  5
// Output :     *   *   *   *   *

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
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