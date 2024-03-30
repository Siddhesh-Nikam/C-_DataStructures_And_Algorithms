// Input :  Row 4   Columns    4
/*

A   A   A   A
B   B   B   B
C   C   C   C
D   D   D   D

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

    for(int i=1,ch='a';i<=iRows;i++,ch++)
    {
        for(int j= 1;j<=iColumns;j++)
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


