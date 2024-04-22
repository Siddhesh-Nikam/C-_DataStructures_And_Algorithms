//Reverse each word in the string


#include<iostream>
#include <algorithm>
using namespace std;

string reverseWords(string str)
{
    int l=0,r=0;

    while(l<str.size())
    {
        while(r<str.size()&&str[r]!=' ')
        {
            r++;
        }
        reverse(str.begin()+l,str.begin()+r);
        l=r+1;
        r=l;
    }

    return str;
    
}

int main()
{
   char str[100];
   string Arr;

   cout<<"Enter string:"<<endl;
   scanf("%[^'\n']s",str);

   Arr=reverseWords(str);

   cout<<Arr;
    
    return 0;
}
