//Wrong code

#include<iostream>
using namespace std;

bool CheckPallindrome(char*str)
{
    //Copy string

    char dest[20];

    int i=0;
    while(str[i]!='\0')
    {
        dest[i]=str[i];
        i++;
    }
    *dest='\0';

    //Reverse string

    char Temp;
    char*start=str;
    char*end=str;
    
    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        Temp=*start;
        *start=*end;
        *end=Temp;

        start++;
        end--;
    }

    for(int i=0;i<dest[i]!='\0';i++)
    {
        if(str[i]!=dest[i])
        {
            return false;
        }
    }
    return true;
    

}

int main()
{
    char Arr[20];
    bool bRet=false;

    cout<<"Enter string:"<<endl;
    scanf("%[^'\n']s",Arr);

    bRet=CheckPallindrome(Arr);

    if(bRet==true)
    {
        cout<<"Given string is pallindrome"<<endl;
    }

    else
    {
        cout<<"Given string is not pallindrome"<<endl;
    }

    return 0;
}