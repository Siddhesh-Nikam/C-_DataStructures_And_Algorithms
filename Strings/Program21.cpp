//Count number of words in string

#include<iostream>
using namespace std;

int Count(char*str)
{
    int wordCount =1;
    int ch=0;

    while((*str)!='\0')
    {
        if((*str)==' ')
        {
            if(ch!=0)
            {
                wordCount++;
            }
            ch=0;
        } 

        else
        {
            ch++;
        }
        str++;
    }
    return wordCount;
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);
    
    int iRet = Count(Arr);

    cout<<"Count of word is:"<<iRet<<endl;
    
    return 0;
}