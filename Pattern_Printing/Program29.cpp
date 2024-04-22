
// Input :  Row 4   Columns    4
/*

1
1   2
1   2   3
1   2   3   4

*/

#include<iostream>
using namespace std;

void Display(int iRows,int iColumns)
{
    char ch='\0';

    for(int i=1;i<=iRows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"\t";
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

