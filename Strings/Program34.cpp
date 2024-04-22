#include<iostream>
using namespace std;

void CopyString(char * src,char*dest)
{
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

    CopyString(Arr,Brr);

    cout<<"String after copy :"<<Brr<<endl;


    return 0;
}