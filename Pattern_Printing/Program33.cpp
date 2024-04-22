
// Input :  Row 4   Columns    4
/*

1
2       1
3       2       1
4       3       2       1

*/

#include<iostream>
using namespace std;

void Display(int iRows,int iColumns)
{

    for(int i=1;i<=iRows;i++)
    {
        for(int j=i;j>0;j--)
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

