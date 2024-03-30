// Input :  Row 4   Columns    4
/*

a
a   b
a   b   c
a   b   c   d

*/


#include<iostream>
using namespace std;

void Display(int iRows,int iColumns)
{
    char ch='\0';

    for(int i=1;i<=iRows;i++)
    {
        for(int j=1,ch='a';j<=i;j++,ch++)
        {   
            printf("%c\t",ch);
        }
        cout<<endl;
    }
}

int main()
{
    int iRows=0;
    int iColumns=0;

    cout<<"Enter number of rows:"<<endl;
    cin>>iRows;

    cout<<"Enter number of columns:"<<endl;
    cin>>iColumns;

    Display(iRows,iColumns);

    return 0;
}