#include<iostream>
using namespace std;

void ConcatString(char * src,char*dest)
{
    while(*dest!='\0')
    {
        dest++;
    }
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    cout<<"Enter string:"<<endl;
    cin>>Brr;

    ConcatString(Arr,Brr);

    cout<<"String after concatination :"<<Brr<<endl;

    return 0;
}