#include<iostream>
using namespace std;

void ConcatString(char * src,char*dest)
{
    while(*src!='\0')
    {
        src++;
    }
    while(*dest!='\0')
    {
        *src=*dest;
        src++;
        dest++;
    }
    *src='\0';
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

    cout<<"String after concatination :"<<Arr<<endl;

    return 0;
}