#include<iostream>
using namespace std;

void Display(char *str)
{
    if(*str != '\0')
    {
        cout<<*str;
        Display(++str); // Tail Recurssion
    }
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}