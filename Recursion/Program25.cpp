#include<iostream>
using namespace std;

void DisplayCharacters(int iNo)
{
    static char ch='a';
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        cout<<" "<<ch;
        ch++;
        iCnt++;
        DisplayCharacters(iNo);
    }
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    DisplayCharacters(iValue);

    return 0;
}