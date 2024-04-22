#include <iostream>
using namespace std;

class Number
{
    public:

    int iNo;

    void Accept()
    {
        cout << "Enter number:" << endl;
        cin >> iNo;
    }

    void Display()
    {
        cout << "Entered number is: " << iNo << endl;
    }

    bool CheckArmstrong()
    {
        int iTemp = 0, iDigCnt = 0, iDigit = 0, iMult = 1, iSum = 0;

        iTemp = iNo;

        while (iNo != 0)
        {
            iDigCnt++;
            iNo = iNo / 10;
        }

        iNo = iTemp;

        while (iNo != 0)
        {
            iMult = 1;
            iDigit = iNo % 10;

            for (int i = 1; i <= iDigCnt; i++)
            {
                iMult = iMult * iDigit;
            }
            iSum = iSum + iMult;
            iNo = iNo / 10;
        }

        if (iSum == iTemp)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    bool bRet = false;
    
    bRet = nobj.CheckArmstrong();

    if (bRet == true)
    {
        cout << "Given number is an armstrong number" << endl;
    }

    else
    {
        cout << "Given number is an not an armstrong number" << endl;
    }

    return 0;
}
