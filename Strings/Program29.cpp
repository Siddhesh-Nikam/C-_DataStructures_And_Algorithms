#include<iostream>
using namespace std;

int SearchString(char str[],char ch)
{
    int CountCharacter=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            CountCharacter++;
        }
        str++;
    }
    return CountCharacter;
}

int main()
{
    char Arr[20];
    char ch='\0';
    int iRet=0;

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    cout<<"Enter charcter to search:"<<endl;
    cin>>ch;

    iRet=SearchString(Arr,ch);

    cout<<"Count of given character in string is :"<<iRet<<endl;

    return 0;
}