//Reverse word in the string
//IP  The sky is blue
//OP  blue is sky The


#include<iostream>
using namespace std;

int main()
{
    string str = "    The     sky     is     blue    ";

    // 1. Finding length of string
    //cout<<str.length();

    // 2. Print the string
    // for(int i=0;i<str.length();i++)
    // {
    //     cout<<str[i];
    // }

    int i=0;
    int n = str.size();
    string ans="";

    while(i<n)
    {
        string temp="";

        while(str[i]==' ' && i<n)
        {
            i++;
        }

        while(str[i]!=' ' && i<n)
        {
            temp=temp+str[i];
            i++;
        }

        if(temp.size()>0)
        {
            
            if(ans.size()==0)
            {
                ans=temp;
            }

            else
            {
                ans=temp + " " + ans;
            }
            
        }
    }

    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i];
    }


    

    return 0;
}