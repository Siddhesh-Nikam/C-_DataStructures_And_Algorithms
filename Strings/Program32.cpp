#include<iostream>
using namespace std;

void ToggleString(char * str)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            (*str)=(*str) - 32;
        }

        else if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    ToggleString(Arr);

    cout<<"String in lower case is :"<<Arr<<endl;


    return 0;
}