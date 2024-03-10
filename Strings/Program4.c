//Check whether the character is small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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

    bRet=CheckSmall(ch);

    if(bRet==true)
    {
        printf("Character is small\n");
    }

    else
    {
        printf("Character is not small\n");
    }


    return 0;
}



