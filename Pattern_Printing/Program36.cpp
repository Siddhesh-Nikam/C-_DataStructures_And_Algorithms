
// Input :  Row 4   Columns    4
/*
      
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

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

        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";
        }

        for(col=row-1;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }

        cout<<endl;

    }

    return 0;
}