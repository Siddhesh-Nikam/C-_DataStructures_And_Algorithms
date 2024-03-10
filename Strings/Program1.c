//Display the input string

#include <stdio.h>

void Display(char *Brr)
{
    printf("Entered name is:\n");

    while(*Brr != '\0')
    {
        printf("%c",*Brr);
        Brr++;
    }
}

int main()
{
    char Arr[10];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);     // 50
    
    Display(Arr);   // Display(50);     Name of array is internally considered as its base address
    
    return 0;
}
