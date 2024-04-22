#include<iostream>
using namespace std;

//1.Display string

// void Display(char*Arr)
// {
//     int i=0;

//     while(Arr[i]!='\0')
//     {
//         printf("%c",Arr[i]);
//         Arr++;
//     }
// }

// void Display(char*Arr)
// {

//     while(*Arr!='\0')
//     {
//         printf("%c",*Arr);
//         Arr++;
//     }
// }

//2.Length of string

// int LengthString(char*str)
// {
//     int iCnt=0;

//     while(*str!='\0')
//     {
//         iCnt++;
//         str++;
//     }
//     return iCnt;
// }

//3.Count small

// int CountSmall(char*str)
// {
//     int iCntSmall=0;
//     while(*str!='\0')
//     {
//         if((*str>='a')&&(*str<='z'))
//         {
//             iCntSmall++;
//         }
//         str++;
//     }
//     return iCntSmall;
// }

//4.Count large

// int CountLarge(char*str)
// {
//     int iCntLarge=0;
//     while(*str!='\0')
//     {
//         if((*str>='A')&&(*str<='Z'))
//         {
//             iCntLarge++;
//         }
//         str++;
//     }
//     return iCntLarge;
// }

//5.Count vowels

// int CountVowels(char*str)
// {
//     int iCntVowels=0;
//     while(*str!='\0')
//     {
//         if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
//         {
//             iCntVowels++;
//         }
//         str++;
//     }
//     return iCntVowels;
// }

//6.Check characters

// bool SearchCharacters(char*str,char ch)
// {
//     while(*str!='\0')
//     {
//         if(*str==ch)
//         {
//             return true;
//         }
//         str++;
//     }
//     return false;
// }

//7.UpperCase to LowerCase

// void UpperToLowerCase(char*str)
// {
//     while(*str!='\0')
//     {
//         if((*str>='A')&&(*str<='Z'))
//         {
//             *str=*str+32;
//         }
//         str++;
//     }
// }

//8.LowerCase to UpperCase 

// void LowerToUpperCase(char*str)
// {
//     while(*str!='\0')
//     {
//         if((*str>='a')&&(*str<='z'))
//         {
//             *str=*str-32;
//         }
//         str++;
//     }
// }

//9.Toggle

// void Toggle(char*str)
// {
//     while(*str!='\0')
//     {
//         if((*str>='a')&&(*str<='z'))
//         {
//             *str=*str-32;
//         }

//         else if((*str>='A')&&(*str<='Z'))
//         {
//             *str=*str+32;
//         }
//         str++;
//     }
// }

// void ReverseString(char*str)
// {
//     char*src=str;
//     char*dest=str;
//     char Temp;

//     while(*dest!='\0')
//     {
//         dest++;
//     }
//     dest--;

//     while(src<dest)
//     {
//         Temp=*src;
//         *src=*dest;
//         *dest=Temp;

//         src++;
//         dest--;
//     }
// }

int main()
{
    char Arr[20];

    int iRet=0;

    cout<<"Enter string:"<<endl;
    scanf("%[^'\n']s",Arr);

    CopyString(Arr);

    cout<<Arr;

    return 0;
}