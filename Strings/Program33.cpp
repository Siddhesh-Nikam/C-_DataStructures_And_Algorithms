#include<iostream>
using namespace std;

void ReverseString(char * str)
{
    char*start=str;
    char*end=str;
    char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    // cin>>Arr;
    scanf("%[^'\n']s",Arr);


    ReverseString(Arr);

    cout<<"String in lower case is :"<<Arr<<endl;


    return 0;
}