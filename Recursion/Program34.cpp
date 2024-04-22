#include<iostream>
using namespace std;

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str+1); // Head Recurssion
        printf("%s\n",*str);
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string\n";
    cin>>Arr;

    Display(Arr);
    return 0;
}

