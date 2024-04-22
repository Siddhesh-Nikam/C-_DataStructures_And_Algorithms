
//    a
//   ab
//  abc
// abcd

#include<iostream>
using namespace std;

void Display(int iNo)
{
    char ch='\0';
    for(int i=1;i<=iNo;i++)
    {
        for(int j=1;j<=iNo-i;j++)
        {
            cout<<" ";   
        }


        for(int j=1,ch='a';j<=i;j++,ch++)
        {
            printf("%c",ch);
        }

        cout<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}