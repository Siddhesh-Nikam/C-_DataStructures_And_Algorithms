//6
//a b c d e f 

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char ch = 'a' ;
    static int iCnt =  0 ;

    if(iCnt < iNo)
    {
        cout<<ch<<endl;
        ch++;
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0 ;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}




