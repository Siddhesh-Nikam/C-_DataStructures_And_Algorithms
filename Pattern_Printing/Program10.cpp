// Input :  Row 4   Columns     4
/*
1   2   3   4
1   2   3   4
1   2   3   4
1   2   3   4
*/

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    for(int i=1;i<=iRows;i++)
    {
        for(int j=1;j<=iColumns;j++)
        {
            printf("%d\t",j);
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
