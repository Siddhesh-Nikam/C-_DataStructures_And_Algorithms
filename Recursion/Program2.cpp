#include<iostream>
using namespace std;

//Itterative approach using function

void Display(int Days)
{
    for(int iCnt = Days;iCnt>0;iCnt--)
    {
        cout<< iCnt  << " " << "days left for birthday"<<endl;
    }
 
    cout<<"Happy Birthday"<<endl;


}

int main()
{
    int Days = 0 ;

    cout<<"Enter number of days left for birthday:"<<endl;
    cin>>Days;

    Display(Days);

    return 0;
}