# include<iostream>
using namespace std;

int CheckPrimeNumber(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 2)
    {
        return 0;
    }

    for(iCnt = 2 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number to check prime or not : ";
    cin>>iValue;

    iRet = CheckPrimeNumber(iValue);

    if(iRet == 0)
    {
        cout<<iValue<<" Number is not a Prime Number " ;
    }
    else
    {
        cout<<iValue<<" Number is a Prime Number " ;
    }
    return 0;
}