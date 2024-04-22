#include<iostream>
using namespace std;

bool StringCompare(char * src,char*dest)
{
    while((*src!='\0')&&(*dest!='\0'))
    {
        if(*src!=*dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if(*src == '\0' && *dest == '\0')
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
    char Arr[20];
    char Brr[20];
    bool bRet;

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    cout<<"Enter string:"<<endl;
    cin>>Brr;

    bRet=StringCompare(Arr,Brr);

    if(bRet == true)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal"<<endl;
    }

    return 0;
}