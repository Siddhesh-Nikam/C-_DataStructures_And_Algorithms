//Count the number of letters in the given string

#include<stdio.h>

int CountLetters(char * Brr)
{
    int iCnt=0;

    if(Brr==NULL)
    {
        printf("The number of letters in string is 0");
    }

    while(*Brr!='\0')
    {
        iCnt++;
        Brr++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountLetters(Arr);

    printf("The number of letters in string is:%d\n",iRet);

    return 0;
}