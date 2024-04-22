#include<iostream>
using namespace std;

void UpperCase(char str[])
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            (*str)=(*str) - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    UpperCase(Arr);

    cout<<"String in lower case is :"<<Arr<<endl;


    return 0;
}