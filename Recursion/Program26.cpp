#include<iostream>
using namespace std;

// void DisplayI(char*Brr)
// {
//     while(*Brr!='\0')
//     {
//         cout<<*Brr<<endl;
//         Brr++;
//     }
// }

void DisplayR(char*Brr)
{
    if(*Brr!='\0')
    {
        cout<<*Brr<<endl;
        DisplayR(Brr+1);
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    //DisplayI(Arr);   // Display(920);

    DisplayR(Arr);

    return 0;
}