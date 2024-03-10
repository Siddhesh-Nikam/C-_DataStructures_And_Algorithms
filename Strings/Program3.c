//Check whether the character is capital or not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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
    char ch='\0';
    bool bRet=false;

    printf("Enter the character:\n");
    scanf("%c",&ch);

    bRet=CheckCapital(ch);

    if(bRet==true)
    {
        printf("Character is capital\n");
    }

    else
    {
        printf("Character is not capital\n");
    }


    return 0;
}



