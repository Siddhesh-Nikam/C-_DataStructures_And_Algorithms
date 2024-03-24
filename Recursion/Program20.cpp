#include<iostream>
using namespace std;

int CountSmallCaseI(char*str)
{
    int iCount=0;
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    int iRet=CountSmallCaseI(Arr);

    cout<<"Small characters number is : " <<iRet<<endl;

    return 0;
}