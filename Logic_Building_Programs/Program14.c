//Check whether given number is pallindrome or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }

    if(iRev==iTemp)
    {
        return true;
    }

    else
    {
        return false;
    }
}


int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckPallindrome(iValue);

    if(bRet==true)
    {
        printf("Given number is pallindrome\n");
    }
    else
    {
        printf("Given number is not pallindrome\n");
    }

    return 0;
}



