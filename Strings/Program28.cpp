#include<iostream>
using namespace std;

int CountVowels(char str[])
{
    int CountVowels=0;
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            CountVowels++;
        }
        str++;
    }
    return CountVowels;
}

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    iRet=CountVowels(Arr);

    cout<<"Count of vowels in string is :"<<iRet<<endl;

    return 0;
}