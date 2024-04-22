#include<iostream>
using namespace std;

bool ReverseString(char*str)
{
    char Temp;
    char*start=str;
    char*end=str;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        Temp=*start;
        *start=*end;
        *end=Temp;

        start++;
        end--;
    }

    
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    scanf("%[^'\n']s",Arr);

    ReverseString(Arr);

    cout<<"String in lower case is :"<<Arr<<endl;

    return 0;
}