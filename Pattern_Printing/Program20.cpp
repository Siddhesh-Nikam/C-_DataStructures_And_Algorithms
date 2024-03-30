// Input :  Row 4   Columns    4
/*

    a   b   c   d
    a   b   c   d
    a   b   c   d
    a   b   c   d

*/


#include<stdio.h>

void Display(int iRows,int iColumns)
{
    char ch='\0';
    
    if(iRows != iColumns)
    {
        printf("Invalid input\n");
        return;
    }

    for(int i=1;i<=iRows;i++)
    {
        for(int j= 1,ch='a';j<=iColumns;j++,ch++)
        {
            printf("%c\t",ch);
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


