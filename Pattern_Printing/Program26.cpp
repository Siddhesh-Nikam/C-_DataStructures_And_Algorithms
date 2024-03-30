// Input :  Row 4   Columns    4

/*


*
*   *
*   *   *
*   *   *   *
*   *   *   *
*   *   *
*   *
*

*/

#include<iostream>
using namespace std;

void Display(int iRows,int iColumns)
{
    char ch='\0';

    for(int i=1;i<=iRows;i++)
    {
        for(int j=1;j<=iColumns;j++)
        {
            if(i>=j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

    for(int i=iRows-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {   
            printf("*\t");
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