// Input :  4
// Output :     1 * 3 *
// O(2N)

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("*\t");
        }

        else
        {
            printf("%d\t",iCnt);
        }
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


