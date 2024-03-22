#include<stdio.h>

// *    *   *   *

void DisplayI()
{
    int iCnt = 0;

    while(iCnt < 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    //To preserve the value across the function call static keyword is used
    
    static int iCnt = 0;

    if(iCnt < 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();         // Recurssive call
    }
}

int main()
{
    DisplayR();

    return 0;
}