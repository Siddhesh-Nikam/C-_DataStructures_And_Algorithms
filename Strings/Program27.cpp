#include<iostream>
using namespace std;

int CountSmallLetter(char str[])
{
    int CountSmall=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            CountSmall++;
        }
        str++;   
    }
    return CountSmall;
}

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter string:"<<endl;
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallLetter(Arr);

    cout<<"Numbers of small characters in string are:"<<iRet<<endl;


    return 0;
}