// Input :  Row 6   Columns    6
/*

*   *   *   *   *   *
*   *   $   $   $   *
*   &   *   $   $   *
*   &   &   *   $   *
*   &   &   &   *   *
*   *   *   *   *   *

*/

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    if(iRows != iColumns)
    {
        printf("Invalid input\n");
        return;
    }

    for(int i=1;i<=iRows;i++)
    {
        for(int j=1;j<=iColumns;j++)
        {
            if((i==j)||(i==1)||(j==1)||(i==iRows)||(j==iColumns))
            {
                printf("*\t");
            }

            
            else
            {
                if(i>j)
                {
                    printf("&\t");
                }

                else if(i<j)
                {
                    printf("$\t");
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRows =0,iColumns=0;

    printf("Enter number of rows:\n");
    scanf("%d",&iRows);

    printf("Enter number of rows:\n");
    scanf("%d",&iColumns);

    Display(iRows,iColumns);

    return 0;
}


