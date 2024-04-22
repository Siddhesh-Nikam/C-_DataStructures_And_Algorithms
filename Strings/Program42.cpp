#include<iostream>
#include <stack>
using namespace std;

void reverseWords(string str)
{
    stack<string>st;

    for(int i=0;i<str.length();i++)
    {
        string word="";

        while(str[i]!=' ' && i<str.length())
        {
            word=word+str[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
   char str[100];

   cout<<"Enter string:"<<endl;
   scanf("%[^'\n']s",str);

   reverseWords(str);
    
    return 0;
}