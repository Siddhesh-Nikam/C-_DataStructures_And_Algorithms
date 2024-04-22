#include<iostream>
using namespace std;

int LengthCapital(char str[])
{
    int iCountCapital=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCountCapital++;
        }
        str++;
    }
    return iCountCapital;
}

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    iRet = LengthCapital(Arr);

    cout<<"Numbers of capital characters in string are:"<<iRet<<endl;


    return 0;
}