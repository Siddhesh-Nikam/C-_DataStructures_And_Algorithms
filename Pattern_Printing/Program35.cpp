
// Input :  Row 4   Columns    4
/*
      
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include<iostream>
using namespace std;

int main()
{
    int row;
    int col;
    int n;

    cout<<"Enter input:"<<endl;
    cin>>n;

    for(row=1;row<=n;row=row+1)
    {
        // space print

        for(col=1;col<=n-row;col=col+1)
        {
            cout<<"  ";
        }

        // * print

        for(col=1;col<=2*row-1;col=col+1)
        {
            cout<<"* ";
        }

        cout<<endl;

    }

    return 0;
}