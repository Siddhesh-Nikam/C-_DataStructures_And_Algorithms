#include<iostream>
using namespace std;

int CountSmallCaseR(char*str)
{
    static int iCount=0;

    if(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCount++;
        }
        str++;
        CountSmallCaseR(str);
    }
    return iCount;
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    int iRet=CountSmallCaseR(Arr);

    cout<<"Small characters number is : " <<iRet<<endl;

    return 0;
}