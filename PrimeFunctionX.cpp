# include<iostream>
using namespace std;

bool CheckPrimeNumber(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 2)
    {
        return false;
    }

    for(iCnt = 2 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int iValue = 0;
    bool iRet = 0;

    cout<<"Enter number to check prime or not : ";
    cin>>iValue;

    iRet = CheckPrimeNumber(iValue);

    if(iRet == false)
    {
        cout<<iValue<<" Number is not a Prime Number " ;
    }
    else
    {
        cout<<iValue<<" Number is a Prime Number " ;
    }
    return 0;
}