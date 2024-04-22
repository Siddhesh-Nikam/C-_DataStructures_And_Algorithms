#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iTemp=0,iDigit=0,iDigCnt=0,iMult=1,iSum=0;

    iTemp=iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iDigCnt++;
        iNo=iNo/10;
    }

    iNo=iTemp;

    while(iNo!=0)
    {
        iMult=1;
        iDigit=iNo%10;
        for(int i=1;i<=iDigCnt;i++)
        {
            iMult=iMult*iDigit;
        }

        iSum=iSum+iMult;
        iNo=iNo/10;
    }

    if(iSum==iTemp)
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
    bool bRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckArmstrong(iValue);

    if(bRet==true)
    {
        printf("Given is an armstrong number\n");
    }

    else
    {
        printf("Given is not an armstrong number\n");
    }

    return 0;
}