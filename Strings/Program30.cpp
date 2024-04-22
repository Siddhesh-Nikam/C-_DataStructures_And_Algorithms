#include<iostream>
using namespace std;

void LowerCase(char str[])
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    char ch='\0';
    int iRet=0;

    cout<<"Enter string:"<<endl;
    cin>>Arr;
    
    LowerCase(Arr);

    cout<<"String in lower case is :"<<Arr<<endl;

    return 0;
}