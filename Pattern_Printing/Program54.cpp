
// Input :  Row 4   Columns    4
/*
      
   1
  121
 12312
1234123
123451234
*/

#include<iostream>
using namespace std;

int main()
{
    int i=0;
    int j=0;

    int n=0;

    cout<<"Enter number:"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<j;
        }

        for(j=1;j<i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}