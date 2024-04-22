#include<iostream>
using namespace std;

void DisplayCharacters(int iNo)
{
    char ch='a';

    int iCnt=1;
    while(iCnt<=iNo)
    {
        cout<<" "<<ch;
        ch++;
        iCnt++;
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